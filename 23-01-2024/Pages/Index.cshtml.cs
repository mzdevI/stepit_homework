using System.ComponentModel.DataAnnotations;
using _23_01_2024.Context;
using _23_01_2024.Models;
using _23_01_2024.Repositories;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Newtonsoft.Json;

namespace _23_01_2024.Pages;

public class IndexModel(IHttpClientFactory httpClientFactory, IMovieRepository movieRepository, IConfiguration configuration) : PageModel
{
    [BindProperty]
    [Required(ErrorMessage = "Please enter a search term.")]
    public string SearchTerm { get; set; }

    public List<Movie> SearchResults { get; set; }

    public async Task OnPostAsync()
    {
        if (ModelState.IsValid)
        {
            var httpClient = httpClientFactory.CreateClient();
            var apiKey = configuration["OMDb:ApiKey"];
            var apiUrl = $"http://www.omdbapi.com/?s={SearchTerm}&apikey={apiKey}";

            var response = await httpClient.GetAsync(apiUrl);

            if (response.IsSuccessStatusCode)
            {
                var json = await response.Content.ReadAsStringAsync();
                var searchResult = JsonConvert.DeserializeObject<MovieSearchResult>(json);

                SearchResults = searchResult.Search;
                
                foreach (var result in SearchResults)
                {
                    var movie = new Movie
                    {
                        Title = result.Title,
                        Year = result.Year
                    };
                    
                    await movieRepository.InsertAsync(movie);
                }
            }
            else
            {
                SearchResults = new List<Movie>();
            }
        }
    }
}
