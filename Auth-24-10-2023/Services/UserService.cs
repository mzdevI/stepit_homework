using Auth_24_10_2023.Models;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Data;
using System.Linq;
using System.Security.Authentication;
using System.Text;
using System.Threading.Tasks;

namespace Auth_24_10_2023.Services;

internal class UserService
{
    static public List<User>? Users { get; private set; } = new(DeserializeService.Deserialize("UserDB.json"));

    static public User AddUser(User newUser)
    {
        if (Users != null)
        {
            foreach (var user in Users)
            {
                if (user.Email == newUser.Email)
                {
                    throw new DuplicateNameException("User with this email already exists");
                }
            }
        }

        Users.Add(newUser);
        SerializeService.Serialize("UserDB.json", Users);

        return newUser;
    }

    static public User AuthUser(string email, string password)
    {
        if (Users != null)
        {
            foreach (var user in Users)
            {
                if (user.Email == email && user.Password == password)
                {
                    return user;
                }
            }
        }

        throw new InvalidCredentialException("Invalid email or password");
    }

    static public User ResetPassword(string email, string newPassword)
    {
        if (Users != null)
        {
            foreach(var user in Users)
            {
                if (user.Email == email)
                {
                    user.ResetPassword(newPassword);
                    SerializeService.Serialize("UserDB.json", Users);

                    return user;
                }
            }
        }

        throw new InvalidCredentialException("Invalid email, this user does not exist");
    }
}
