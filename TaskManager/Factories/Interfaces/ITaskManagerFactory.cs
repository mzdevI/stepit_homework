using TaskManager.Entities.Interfaces;

namespace TaskManager.Factories.Interfaces;

public interface ITaskManagerFactory
{
    ITaskButton CreateTaskButton();
    ITaskTextBox CreateTaskTextBox();
    ITaskListBox CreateTaskListBox(); 
}
