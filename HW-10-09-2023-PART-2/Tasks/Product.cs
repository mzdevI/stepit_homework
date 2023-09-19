namespace HW_10_09_2023_PART_2.Tasks;

public class Product
{
    public string Name { get; set; }
    public Money Price { get; set; }

    public Product(string name, Money price)
    {
        Name = name;
        Price = price;
    }

    public void ReducePrice(int reduceDollars, int reduceCents)
    {
        Price.SubtractMoney(reduceDollars, reduceCents);
    }

    public void DisplayProductInfo()
    {
        Console.WriteLine($"Product: {Name}");
        Price.DisplayAmount();
    }
}