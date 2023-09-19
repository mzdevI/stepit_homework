namespace HW_10_09_2023_PART_2.Task3;

public class Trombone : MusicalInstrument
{
    public Trombone(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The trombone '{Name}' has a bold, brass sound.");
    }

    public override void Show()
    {
        Console.WriteLine($"Musical Instrument: Trombone '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a trombone named '{Name}' used in jazz and classical music.");
    }

    public override void History()
    {
        Console.WriteLine($"The trombone '{Name}' has a unique history and evolution in music.");
    }
}