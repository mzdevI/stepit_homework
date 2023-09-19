namespace HW_10_09_2023_PART_2.Task4;

public class President : Worker
{
    public President(string name) : base(name) { }

    public override void Print()
    {
        Console.WriteLine($"President: {Name}");
    }
}