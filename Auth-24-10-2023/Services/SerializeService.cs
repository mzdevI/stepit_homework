using Auth_24_10_2023.Models;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Auth_24_10_2023.Services
{
    internal class SerializeService
    {
        public static void Serialize<T>(string path, List<T> List)
        {
            using var fileStream = new FileStream(path, FileMode.Truncate);
            JsonSerializer.Serialize(fileStream, List);
        }
    }
}
