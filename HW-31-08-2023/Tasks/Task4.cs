namespace HW_31_08_2023.Tasks;

public class Task4
{
    public string SiteName { get;  set; }
    public readonly string SiteUrl; 
    public string SiteDescription { get;  set; }
    public readonly string IpAddress;
    
    public Task4(string name, string url, string description, string ip)
    {
        SiteName = name;
        SiteUrl = url;
        SiteDescription = description;
        IpAddress = ip;
    }

    public void DisplayWebsiteInfo()
    {
        Console.WriteLine("Website Name: " + SiteName);
        Console.WriteLine("Website URL: " + SiteUrl);
        Console.WriteLine("Website Description: " + SiteDescription);
        Console.WriteLine("IP Address: " + IpAddress);
    }
}