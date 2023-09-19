namespace HW_10_09_2023_PART_2.Task2;

public class Car : Device
{
    public Car(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The car '{Name}' engine revs.");
    }

    public override void Show()
    {
        Console.WriteLine($"Device: Car '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a car named '{Name}' used for transportation.");
    }
}