namespace HW_10_09_2023_PART_2.Task2;

public class Kettle : Device
{
    public Kettle(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The kettle '{Name}' makes boiling sounds.");
    }

    public override void Show()
    {
        Console.WriteLine($"Device: Kettle '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a kettle named '{Name}' used for boiling water.");
    }
}