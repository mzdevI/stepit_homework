using Auth_24_10_2023.Models;
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
    public partial class HomeView : Page
    {
        private User? _user;
        public HomeView(User user)
        {
            InitializeComponent();
            _user = user;
            if (_user == null)
            {
                NavigationService.GoBack();
            }

            EmailNameLabel.Content = _user.Email;
        }
 
        public void LogoutButton_Click(object sender, RoutedEventArgs e)
        {
            NavigationService.Navigate(new LoginView());
        }
    }
}
