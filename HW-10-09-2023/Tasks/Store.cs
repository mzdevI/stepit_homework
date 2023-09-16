namespace HW_10_09_2023.Tasks;

public class Store
{
    public string StoreName { get; set; }
    public string Address { get; set; }
    public string ProfileDescription { get; set; }
    public string ContactPhone { get; set; }
    public string ContactEmail { get; set; }
    public double Area { get; private set; }

    public Store(string name, string address, string desc, string phone, string email, double area)
    {
        StoreName = name;
        Address = address;
        ProfileDescription = desc;
        ContactPhone = phone;
        ContactEmail = email;
        Area = area;
    }
    
    public void AddArea(double count = 1)
    {
        if (count < 1)
            throw new ArgumentException("Count must be 1 or greater.", nameof(count));
        
        Area += count;
    }
    
    public void RemoveArea(double count = 1)
    {
        if (Area < 1)
            throw new InvalidOperationException("Collaborators count cannot be less than 1.");
        
        if (count > 10) // Store area can't be smaller than 10 (Ideally value should be in a separate variable)
            throw new ArgumentException("Value must be 10 or greater.", nameof(Area));
        
        Area -= count;
    }

    public static Store operator +(Store store, double additionalArea)
    {
        store.AddArea(additionalArea);
        return store;
    }

    public static Store operator -(Store store, double reductionArea)
    {
        store.RemoveArea(reductionArea);
        return store;
    }
    

    public static bool operator ==(Store store1, Store store2)
    {
        return store1.Area == store2.Area;
    }

    public static bool operator !=(Store store1, Store store2)
    {
        return store1.Area != store2.Area;
    }

    public static bool operator <(Store store1, Store store2)
    {
        return store1.Area < store2.Area;
    }

    public static bool operator >(Store store1, Store store2)
    {
        return store1.Area > store2.Area;
    }

    public override bool Equals(object obj)
    {
        if (obj is Store otherStore)
        {
            return Area.Equals(otherStore.Area);
        }
        return false;
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