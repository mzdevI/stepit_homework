namespace HW_10_09_2023_PART_2.Task3;

public class Cello : MusicalInstrument
{
    public Cello(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The cello '{Name}' produces rich, deep tones.");
    }

    public override void Show()
    {
        Console.WriteLine($"Musical Instrument: Cello '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a cello named '{Name}' used in orchestras and chamber music.");
    }

    public override void History()
    {
        Console.WriteLine($"The cello '{Name}' has a long history as a classical instrument.");
    }
}