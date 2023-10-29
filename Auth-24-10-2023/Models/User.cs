using Auth_24_10_2023.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Authentication;
using System.Text;
using System.Threading.Tasks;

namespace Auth_24_10_2023.Models;

public class User
{
    public string Email { get; }

    public string Password { get; private set; }

    public User(string email, string password)
    {
        if (EmailValidation.ValidateEmail(email) == true)
        {
            Email = email;
        }
        else
        {
            throw new ArgumentException($"{email} is not a valid email");
        }

        Password = password;
    }

    public void ResetPassword(string newPassword)
    {
        Password = newPassword;
    }
}
