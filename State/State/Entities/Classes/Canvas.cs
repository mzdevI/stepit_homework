using State.Entities.Interfaces;

namespace State.Entities.Classes;

public class Canvas
{
    private ITool _currentTool;

    public Canvas(ITool initialTool)
    {
        SetTool(initialTool);
    }

    public void SetTool(ITool tool)
    {
        Console.WriteLine($"Switching to {tool.GetType().Name}");
        _currentTool = tool;
    }

    public void MouseDown()
    {
        _currentTool.MouseDown();
    }

    public void MouseUp()
    {
        _currentTool.MouseUp();
    } 
}
