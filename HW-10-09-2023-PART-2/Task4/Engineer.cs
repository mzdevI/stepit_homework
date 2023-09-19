namespace HW_10_09_2023_PART_2.Task4;

public class Engineer : Worker
{
    public Engineer(string name) : base(name) { }

    public override void Print()
    {
        Console.WriteLine($"Engineer: {Name}");
    }
}