using TaskManager.Entities.Interfaces;

namespace TaskManager.Entities.Classes;

public class ConsoleTaskTextBox : ITaskTextBox
{
    public void Render()
    {
        Console.WriteLine("[Text Field]");
    }
}
