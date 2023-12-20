using System.Windows.Controls;
using System.Windows.Media.Imaging;

namespace NavigationWindow.Pages;

public partial class InfoView : Page
{
    public InfoView(Forecast forecast)
    {
        InitializeComponent();

        tempLbl.Content = forecast.Main.Temp;
        pressureLbl.Content = forecast.Main.Pressure;
        feelsLikeLbl.Content = forecast.Main.FeelsLike;

        weatherImg.Source = new BitmapImage(new Uri($"http://openweathermap.org/img/w/{forecast.Weather[0].Icon}.png"));

        sunsetLbl.Content = GetDateByUnixSeconds(forecast.Sys.Sunset).AddSeconds(forecast.Timezone).ToString("HH:mm:ss");
        sunriseLbl.Content = GetDateByUnixSeconds(forecast.Sys.Sunrise).AddSeconds(forecast.Timezone).ToString("HH:mm:ss");


    }
    private DateTime GetDateByUnixSeconds(int seconds)
    {
        DateTime date = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc).AddSeconds(seconds);
        return date;
    }
}
