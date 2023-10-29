using Auth_24_10_2023.Models;
using Auth_24_10_2023.Services;
using Auth_24_10_2023.Views;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Security.Authentication;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Navigation;

namespace Auth_24_10_2023.Presenters;
public class SignupPresenter
{
    public SignupView View { get; init; }

    public SignupPresenter(SignupView signupView)
    {
        View = signupView;
    }

    public void SignupUser(string email, string password)
    {
        try
        {
            View.Autherize(UserService.AddUser(new(email, password)));
        }

        catch (Exception ex)
        {
            View.DisplayError(ex.Message);
        }
    }
}
