using System.IO;
using System.Text.Json;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
namespace NavigationWindow.Pages;

public partial class SearchView : Page
{
    public List<Forecast> SearchResults { get; set; }

    public SearchView()
    {
        InitializeComponent();

        SearchResults = GetAllSearch() ?? new();
        searchResults.ItemsSource = SearchResults;
    }

    private List<Forecast>? GetAllSearch()
    {
        using FileStream fs = new("results.json", FileMode.OpenOrCreate);
        using StreamReader sr = new(fs);

        string? json = sr.ReadToEnd();

        if (string.IsNullOrEmpty(json))
        {
            return null;
        }

        return JsonSerializer.Deserialize<List<Forecast>>(json);
    }

    private void SaveAllSearch()
    {
        using FileStream fs = new("results.json", FileMode.OpenOrCreate);
        using StreamWriter sw = new(fs);

        string json = JsonSerializer.Serialize(SearchResults);

        sw.Write(json);
    }

    private void searchButton_Click(object sender, RoutedEventArgs e)
    {
        try
        {
            var res = WeatherService.GetWeatherByCity(searchBox.Text);

            res.SearchDate = DateTime.Now;
            res.name = searchBox.Text.ToLower();

            SearchResults.Add(res);

            searchResults.Items.Refresh();

            SaveAllSearch();

            searchBox.Clear();

        }
        catch (Exception ex)
        {
            MessageBox.Show(ex.Message);
        }
    }

    private void searchResults_MouseDoubleClick(object sender, MouseButtonEventArgs e)
    {
        this.NavigationService.Navigate(new InfoView(searchResults.SelectedItem as Forecast));
    }
}
