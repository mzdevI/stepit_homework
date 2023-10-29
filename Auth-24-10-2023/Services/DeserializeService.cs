using Auth_24_10_2023.Models;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.Serialization;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Auth_24_10_2023.Services
{
    internal class DeserializeService
    {
        public static List<User> Deserialize(string path)
        {
            using var fileStream = new FileStream(path, FileMode.OpenOrCreate);
            using var streamReader = new StreamReader(fileStream);

            var json = streamReader.ReadToEnd();
            var result = JsonSerializer.Deserialize<List<User>>(json) ?? new List<User>();

            return result;
        }
    }
}
