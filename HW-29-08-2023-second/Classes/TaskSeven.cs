namespace _29_08_2023_second.Classes;

public static class TaskSeven
{
    public static void WordFilter()
    {
        Console.WriteLine("Enter the text: ");
        string inputText = Console.ReadLine();

        Console.WriteLine("Enter the prohibited words (comma-separated): ");
        string prohibitedWordsInput = Console.ReadLine();
        string[] prohibitedWords = prohibitedWordsInput.Split(',');

        int replacementCount = 0;

        foreach (var word in prohibitedWords)
        {
            string trimmedWord = word.Trim();
            int wordLength = trimmedWord.Length;
            int index = -1;

            do
            {
                index = inputText.IndexOf(trimmedWord, StringComparison.OrdinalIgnoreCase);

                if (index != -1)
                {
                    inputText = inputText.Remove(index, wordLength).Insert(index, new string('*', wordLength));
                    replacementCount++;
                }

            } while (index != -1);
        }

        Console.WriteLine("Filtered Text:");
        Console.WriteLine(inputText);

        Console.WriteLine($"Statistics: {replacementCount} replacements made.");
    }
}
