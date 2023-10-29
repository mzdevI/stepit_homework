using Auth_24_10_2023.Models;
using Auth_24_10_2023.Presenters;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Auth_24_10_2023.Views
{
    public partial class SignupView : Page 
    {
        public SignupPresenter Presenter { get; set; }

        public SignupView()
        {
            InitializeComponent();
            Presenter = new SignupPresenter(this);
        }

        public void SignupButton_Click(object sender, RoutedEventArgs e)
        {
            Presenter.SignupUser(EmailTextBox.Text, PasswordBox.Password);
        }

        public void LoginButton_Click(object sender, RoutedEventArgs e)
        {
            NavigationService.Navigate(new LoginView());
        }

        public void DisplayError(string errorMessage)
        {
            ErrorLabel.Content = errorMessage;
        }

        public void Autherize(User user)
        {
            NavigationService.Navigate(new HomeView(user));
        }
    }
}
