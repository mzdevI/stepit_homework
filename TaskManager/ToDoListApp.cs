using TaskManager.Entities.Interfaces;
using TaskManager.Factories.Interfaces;

namespace TaskManager;

public class ToDoListApp(ITaskManagerFactory factory)
{
    private readonly ITaskButton _addButton = factory.CreateTaskButton();
    private readonly ITaskTextBox _textBox = factory.CreateTaskTextBox();
    private readonly ITaskListBox _listBox = factory.CreateTaskListBox();

    private readonly List<string> _tasks = [];

    public void Run()
    {
        while (true)
        {
            _addButton.Render();
            Console.WriteLine("Enter task (or 'exit' to quit):");
            var task = Console.ReadLine();

            if (task?.ToLower() == "exit")
            {
                break;
            }

            if (task != null) _tasks.Add(task);

            Console.Clear();
            _listBox.Render(_tasks);
        }
    }}
