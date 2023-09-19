namespace HW_10_09_2023_PART_2.Task4;

public abstract class Worker
{
    public string Name { get; set; }

    protected Worker(string name)
    {
        Name = name;
    }

    // Abstract method Print, to be overridden by derived classes
    public abstract void Print();
}