namespace HW_10_09_2023_PART_2.Task3;

public abstract class MusicalInstrument : IMusicalInstrumentable
{
    protected string Name { get; }

    protected MusicalInstrument(string name)
    {
        Name = name;
    }

    public abstract void Sound();
    public abstract void Show();
    public abstract void Desc();
    public abstract void History();
}
