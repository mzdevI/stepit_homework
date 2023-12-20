using Newtonsoft.Json;

namespace Cinema.Models;

class MovieResultWrapper
{
    [JsonProperty("results")]
    public Movie[] Results { get; set; }

}
