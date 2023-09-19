namespace HW_10_09_2023_PART_2.Task4;

public class Security : Worker
{
    public Security(string name) : base(name) { }

    public override void Print()
    {
        Console.WriteLine($"Security: {Name}");
    }
}
