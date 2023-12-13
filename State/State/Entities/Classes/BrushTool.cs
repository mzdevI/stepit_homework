using State.Entities.Interfaces;

namespace State.Entities.Classes;

public class BrushTool : ITool
{
    public void MouseDown()
    {
        Console.WriteLine("Brush Tool: Mouse Down");
    }

    public void MouseUp()
    {
        Console.WriteLine("Brush Tool: Mouse Up");
    } 
}
