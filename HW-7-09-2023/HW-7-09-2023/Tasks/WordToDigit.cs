namespace HW_7_09_2023.Tasks;

public static class WordToDigit
{
    private static readonly Dictionary<string, int> WordToDigitDict = new()
    {
        { "zero", 0 },
        { "one", 1 },
        { "two", 2 },
        { "three", 3 },
        { "four", 4 },
        { "five", 5 },
        { "six", 6 },
        { "seven", 7 },
        { "eight", 8 },
        { "nine", 9 }
    };

    public static void Converter()
    {
        Console.Write("Enter a word (zero to nine): ");
        var userInput = Console.ReadLine().ToLower(); 

        if (WordToDigitDict.TryGetValue(userInput, out int digit))
        {
            Console.WriteLine($"Corresponding digit: {digit}");
        }
        else
        {
            Console.WriteLine("Invalid input. Please enter a valid word from zero to nine.");
        }
    }
}