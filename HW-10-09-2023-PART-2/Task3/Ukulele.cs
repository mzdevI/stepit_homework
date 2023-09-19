namespace HW_10_09_2023_PART_2.Task3;

public class Ukulele : MusicalInstrument
{
    public Ukulele(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The ukulele '{Name}' has a cheerful, tropical sound.");
    }

    public override void Show()
    {
        Console.WriteLine($"Musical Instrument: Ukulele '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a ukulele named '{Name}' known for its small size and pleasant tone.");
    }

    public override void History()
    {
        Console.WriteLine($"The ukulele '{Name}' has roots in Hawaii and gained popularity worldwide.");
    }
}
