namespace HW_17_09_2023.Tasks;

public class SecondArray : ICalcable, IOutput2
{
    private readonly int[] _array;

    public SecondArray(int[] values)
    {
        _array = values;
    }

    public int Less(int valueToCompare)
    {
        return _array.Count(item => item < valueToCompare);
    }

    public int Greater(int valueToCompare)
    {
        return _array.Count(item => item > valueToCompare);
    }

    public void ShowEven()
    {
        Console.WriteLine("Even values:");
        Console.WriteLine(_array.Count(item => item % 2 == 0));
    }

    public void ShowOdd()
    {
        Console.WriteLine("Odd values:");
        Console.WriteLine(_array.Count(item => item % 2 != 0));
    }
}
