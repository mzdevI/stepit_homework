namespace FlyWeight;

public class TextEditor
{
    private readonly CharacterFormatFactory _formatFactory = new();
    private readonly List<Tuple<char, ConsoleColor>> _charactersWithFormats = [];

    public void AddCharacter(char character, ConsoleColor textColor)
    {
        _charactersWithFormats.Add(new Tuple<char, ConsoleColor>(character, textColor));
    }

    public void PrintText()
    {
        foreach (var tuple in _charactersWithFormats)
        {
            _formatFactory.GetCharacterFormat(tuple.Item2).ApplyFormat();
            Console.Write(tuple.Item1);
        }

        Console.WriteLine();
    }
}
