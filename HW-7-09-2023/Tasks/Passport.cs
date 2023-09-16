namespace HW_7_09_2023.Tasks;

public class Passport
{
    public readonly string  PassportNumber;
    public readonly string FullName;
    public readonly DateTime IssueDate;

    public Passport(string passportNumber, string fullName, DateTime issueDate)
    {
        if (string.IsNullOrWhiteSpace(passportNumber))
        {
            throw new ArgumentException("Invalid passport number");
        }

        if (string.IsNullOrWhiteSpace(fullName))
        {
            throw new ArgumentException("Invalid name");
        }

        if (issueDate > DateTime.Now)
        {
            throw new ArgumentException("Invalid issue date");
        }

        PassportNumber = passportNumber;
        FullName = fullName;
        IssueDate = issueDate;
    }

    public void DisplayPassportInfo()
    {
        Console.WriteLine("Passport Information:");
        Console.WriteLine($"Passport Number: {PassportNumber}");
        Console.WriteLine($"Full Name: {FullName}");
        Console.WriteLine($"Issue Date: {IssueDate:dd/MM/yyyy}");
    }
}