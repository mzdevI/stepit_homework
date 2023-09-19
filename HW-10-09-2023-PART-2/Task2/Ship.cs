namespace HW_10_09_2023_PART_2.Task2;

public class Ship : Device
{
    public Ship(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The ship '{Name}' horn blows.");
    }

    public override void Show()
    {
        Console.WriteLine($"Device: Ship '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a ship named '{Name}' used for water transport.");
    }
}
