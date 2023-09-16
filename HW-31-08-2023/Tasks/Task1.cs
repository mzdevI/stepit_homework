namespace HW_31_08_2023.Tasks;

public static class Task1
{
    public static void DrawSquare(int length, string symbol)
    {
        if (length < 1)
        {
            throw new ArgumentException("Length must be greater than or equal to 1.", nameof(length));
        }

        string line = new string(symbol[0], length);

        for (int i = 0; i < length; i++)
        {
            Console.WriteLine(line);
        }
    }
}
