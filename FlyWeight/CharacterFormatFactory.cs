namespace FlyWeight;

public class CharacterFormatFactory
{
    private readonly Dictionary<ConsoleColor, ICharacterFormat> _characterFormats = new();

    public ICharacterFormat GetCharacterFormat(ConsoleColor textColor)
    {
        if (_characterFormats.TryGetValue(textColor, out ICharacterFormat? value)) return value;
        value = new CharacterFormat(textColor);
        _characterFormats[textColor] = value;

        return value;
    } 
}
