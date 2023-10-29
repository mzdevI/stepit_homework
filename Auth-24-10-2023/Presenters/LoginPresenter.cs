using Auth_24_10_2023.Services;
using Auth_24_10_2023.Views;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Auth_24_10_2023.Presenters;
public class LoginPresenter
{
    public LoginView View { get; init; }
    public LoginPresenter(LoginView loginView)
    {
        View = loginView;
    }

    public void LoginUser(string email, string password)
    {
        try
        {
            View.Autherize(UserService.AuthUser(email, password));
        }
        catch (Exception ex) {
            View.DisplayError(ex.Message);
        }
    }
}
