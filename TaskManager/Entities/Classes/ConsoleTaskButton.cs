using TaskManager.Entities.Interfaces;

namespace TaskManager.Entities.Classes;

public class ConsoleTaskButton : ITaskButton
{
    public void Render()
    {
        Console.WriteLine("[Button]");
    }
}
