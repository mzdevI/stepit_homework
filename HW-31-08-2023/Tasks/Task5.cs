namespace HW_31_08_2023.Tasks;

public class Task5
{
    public  string JournalName { get; set; }
    public readonly int FoundationYear;
    public string Description { get; set; }
    public string ContactPhone { get; set; }
    public string ContactEmail { get; set; }

    public Task5(string name, int year, string desc, string phone, string email)
    {
        JournalName = name;
        FoundationYear = year;
        Description = desc;
        ContactPhone = phone;
        ContactEmail = email;
    }

    public void DisplayJournalInfo()
    {
        Console.WriteLine("Journal Name: " + JournalName);
        Console.WriteLine("Foundation Year: " + FoundationYear);
        Console.WriteLine("Description: " + Description);
        Console.WriteLine("Contact Phone: " + ContactPhone);
        Console.WriteLine("Contact Email: " + ContactEmail);
    }
}