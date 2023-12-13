using TaskManager.Entities.Classes;
using TaskManager.Entities.Interfaces;
using TaskManager.Factories.Interfaces;

namespace TaskManager.Factories.Classes;

public class ConsoleTaskManagerFactory : ITaskManagerFactory
{
    public ITaskButton CreateTaskButton()
    {
        return new ConsoleTaskButton();
    }

    public ITaskTextBox CreateTaskTextBox()
    {
        return new ConsoleTaskTextBox();
    }

    public ITaskListBox CreateTaskListBox()
    {
        return new ConsoleTaskListBox();
    } 
}
