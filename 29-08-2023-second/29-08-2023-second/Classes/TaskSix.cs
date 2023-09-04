namespace _29_08_2023_second.Classes;

using System.Text;

public static class TaskSix 
{
    public static string ConvertToSentenceCase(string text)
    {
        if (string.IsNullOrWhiteSpace(text))
        {
            return string.Empty;
        }

        var result = new StringBuilder(text.Length); // Explained in lesson 2
        bool newSentence = true;

        foreach (char c in text)
        {
            if (char.IsLetter(c))
            {
                if (newSentence)
                {
                    result.Append(char.ToUpper(c));
                    newSentence = false;
                }
                else
                {
                    result.Append(char.ToLower(c));
                }
            }
            else
            {
                result.Append(c);
                if (c == '.' || c == '!' || c == '?')
                {
                    newSentence = true;
                }
            }
        }

        return result.ToString();
    }

    public static void ConvertToSentenceCaseDemo()
    {
        Console.WriteLine("Enter a text with sentences: ");
        string inputText = Console.ReadLine();
        
        string resultText = ConvertToSentenceCase(inputText);
        
        Console.WriteLine("Text in Sentence Case: ");
        Console.WriteLine(resultText);
    }
}
