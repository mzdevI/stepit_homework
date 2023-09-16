namespace HW_10_09_2023.Tasks;

public class Journal
{
    public  string JournalName { get; set; }
    public readonly int FoundationYear;
    public string Description { get; set; }
    public string ContactPhone { get; set; }
    public string ContactEmail { get; set; }
    public int Collaborator { get; private set; }
    
    public Journal(string name, int year, string desc, string phone, string email, int collaborators)
    {
        JournalName = name;
        FoundationYear = year;
        Description = desc;
        ContactPhone = phone;
        ContactEmail = email;
        Collaborator = collaborators;
    }
    
    public void AddCollaborator(int count = 1)
    {
        if (count < 1)
            throw new ArgumentException("Count must be 1 or greater.", nameof(count));
        
        Collaborator += count;
    }
    
    public void RemoveCollaborator(int count = 1)
    {
        if (Collaborator < 1)
            throw new InvalidOperationException("Collaborators count cannot be less than 1.");
        
        if (count > 1)
            throw new ArgumentException("Value must be 1 or greater.", nameof(count));
        
        Collaborator -= count;
    }

    public static Journal operator +(Journal journal, int num)
    {
        journal.AddCollaborator(num);
        return journal;
    }
    
    public static Journal operator -(Journal journal, int num)
    {
        journal.RemoveCollaborator(num);
        return journal;
    }
    
    public static bool operator ==(Journal journal, Journal otherJournal)
    {
        return journal.Collaborator == otherJournal.Collaborator;

    }
    
    public static bool operator !=(Journal journal, Journal otherJournal)
    {
        return !(journal == otherJournal);
    }
    
    public override bool Equals(object obj)
    {
        if (obj is Journal otherJournal)
        {
            return Collaborator == otherJournal.Collaborator;
        }
        return false;
    }

    public static bool operator >(Journal journal, Journal otherJournal)
    {
        return journal.Collaborator > otherJournal.Collaborator;
    }
    
    public static bool operator <(Journal journal, Journal otherJournal)
    {
        return journal.Collaborator < otherJournal.Collaborator;
    }

   public void DisplayJournalInfo()
    {
        Console.WriteLine("Journal Name: " + JournalName);
        Console.WriteLine("Foundation Year: " + FoundationYear);
        Console.WriteLine("Description: " + Description);
        Console.WriteLine("Contact Phone: " + ContactPhone);
        Console.WriteLine("Contact Email: " + ContactEmail);
        Console.WriteLine("Collaborators: " + Collaborator);
    }
}