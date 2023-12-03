namespace AbstractFactory.Models;

public class ItemAttributes
{
    public int Height { get; set; }
    public int Width { get; set; }
    public int Length { get; set; }

    public ItemAttributes(int length, int width, int height)
    {
        Length = length;
        Width = width;
        Height = height;
    }
}