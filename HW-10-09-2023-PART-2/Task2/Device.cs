namespace HW_10_09_2023_PART_2.Task2;

public abstract class Device : IDeviceable
{
    protected string Name { get; }

    protected Device(string name)
    {
        Name = name;
    }

    public abstract void Sound();
    public abstract void Show();
    public abstract void Desc(); 
}