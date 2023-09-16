namespace HW_31_08_2023.Tasks;

public class Task6
{
    public string StoreName { get; set; }
    public string Address { get; set; }
    public string ProfileDescription { get; set; }
    public string ContactPhone { get; set; }
    public string ContactEmail { get; set; }

    public Task6(string name, string address, string desc, string phone, string email)
    {
        StoreName = name;
        Address = address;
        ProfileDescription = desc;
        ContactPhone = phone;
        ContactEmail = email;
    }

    public void DisplayStoreInfo()
    {
        Console.WriteLine("Store Name: " + StoreName);
        Console.WriteLine("Address: " + Address);
        Console.WriteLine("Profile Description: " + ProfileDescription);
        Console.WriteLine("Contact Phone: " + ContactPhone);
        Console.WriteLine("Contact Email: " + ContactEmail);
    }
}