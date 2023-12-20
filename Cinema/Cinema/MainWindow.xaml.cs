using Cinema.Services;
using System.Windows;
using System.Windows.Controls;

namespace Cinema;

public partial class MainWindow : Window
{
    public MainWindow()
    {
        InitializeComponent();
    }

    public async void ButtonSearchMovies_Click(object sender, RoutedEventArgs e)
    {
        var search = searchQuery.Text;
        var moviesService = new GetMoviesService();

        try
        {
            var movies = await moviesService.GetMovies(search);

            if (movies is not null)
            {
                ErrorLabel.Content = "";
                MovieListBox.ClearValue(ItemsControl.ItemsSourceProperty);
                MovieListBox.ItemsSource = movies;
            }
            else
            {
                ErrorLabel.Content = "No movies found.";
            }
        }
        catch (Exception ex)
        {
            ErrorLabel.Content = ex.Message;
        }
    }

}