using TaskManager.Entities.Interfaces;

namespace TaskManager.Entities.Classes;

public class ConsoleTaskListBox : ITaskListBox
{
    public void Render(List<string> tasks)
    {
        Console.WriteLine("Task List:");
        foreach (var task in tasks)
        {
            Console.WriteLine($"- {task}");
        }
    }
}
