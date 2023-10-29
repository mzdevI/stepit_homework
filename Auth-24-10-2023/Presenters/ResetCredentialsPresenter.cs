using Auth_24_10_2023.Services;
using Auth_24_10_2023.Views;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Auth_24_10_2023.Presenters;
public class ResetCredentialsPresenter
{
    public ResetCredentialsView View { get; init; }
    public ResetCredentialsPresenter(ResetCredentialsView resetCredentialsView)
    {
        View = resetCredentialsView;
    }

    public void Reset(string email, string newPassword)
    {
        try
        {
            View.Autherize(UserService.ResetPassword(email, newPassword));
        }
        catch (Exception ex) {
            View.DisplayError(ex.Message);
        }
    }

}
