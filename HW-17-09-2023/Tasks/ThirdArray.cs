namespace HW_17_09_2023.Tasks;

public class ThirdArray : ICalcable, IOutput2, ICalc2Able 
{
    private readonly int[] _array;

    public ThirdArray(int[] values)
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

    public int CountDistinct()
    {
        var distinctValues = new HashSet<int>(_array);
        return distinctValues.Count;
    }

    public int EqualToValue(int valueToCompare)
    {
        return _array.Count(item => item == valueToCompare);
    }
}