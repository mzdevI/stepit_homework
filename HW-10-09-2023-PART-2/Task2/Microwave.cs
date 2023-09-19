namespace HW_10_09_2023_PART_2.Task2;

public class Microwave : Device
{
    public Microwave(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The microwave '{Name}' beeps when finished.");
    }

    public override void Show()
    {
        Console.WriteLine($"Device: Microwave '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a microwave named '{Name}' used for heating food.");
    }
}
