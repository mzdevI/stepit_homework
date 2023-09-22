namespace HW_17_09_2023.Tasks;

public class FirstArray : ICalcable
{
    private readonly int[] _array;

    public FirstArray(int[] values)
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
}