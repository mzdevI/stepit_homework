namespace FlyWeight;

public class CharacterFormat(ConsoleColor textColor) : ICharacterFormat
{
    public void ApplyFormat()
    {
        Console.ForegroundColor = textColor;
    }}
