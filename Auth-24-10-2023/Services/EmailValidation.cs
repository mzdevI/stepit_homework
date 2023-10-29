using Auth_24_10_2023.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Auth_24_10_2023.Services
{
    internal class EmailValidation
    {
        public static bool ValidateEmail(string email)
        {
            Regex re = new Regex(@"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$");

            if (re.IsMatch(email))
            {
                return true;
            }

            return false;
        }
    }
}
