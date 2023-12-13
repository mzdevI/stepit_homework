using State.Entities.Interfaces;

namespace State.Entities.Classes;

public class SelectionTool : ITool
{
    public void MouseDown()
    {
        Console.WriteLine("Selection Tool: Mouse Down");
    }

    public void MouseUp()
    {
        Console.WriteLine("Selection Tool: Mouse Up");
    } 
}
