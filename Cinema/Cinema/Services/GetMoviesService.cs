using Cinema.Models;
using Newtonsoft.Json;
using System.Net.Http;

namespace Cinema.Services;

public class GetMoviesService
{
    public async Task<Movie[]> GetMovies(string movieQuery)
    {
        var apiUrl = $"https://api.themoviedb.org/3/search/movie?api_key=694d6009d68c4a93bf4537a4132518bf&query={movieQuery}";
        HttpClient client = new HttpClient();
        HttpResponseMessage responseMessage = await client.GetAsync(apiUrl);

        if (responseMessage.IsSuccessStatusCode)
        {
            var searchResult = await responseMessage.Content.ReadAsStringAsync();

            var resultWrapper = JsonConvert.DeserializeObject<MovieResultWrapper>(searchResult);

            return resultWrapper.Results;
        }
        else
        {
            throw new Exception($"HTTP Error: {responseMessage.StatusCode}");
        }
    }
}
