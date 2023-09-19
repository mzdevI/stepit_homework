namespace HW_10_09_2023_PART_2.Task3;

public class Violin : MusicalInstrument
{
    public Violin(string name) : base(name)
    {
    }

    public override void Sound()
    {
        Console.WriteLine($"The violin '{Name}' produces beautiful melodies.");
    }

    public override void Show()
    {
        Console.WriteLine($"Musical Instrument: Violin '{Name}'");
    }

    public override void Desc()
    {
        Console.WriteLine($"This is a violin named '{Name}' used for classical music.");
    }

    public override void History()
    {
        Console.WriteLine($"The violin '{Name}' has a rich history dating back centuries.");
    }
}
