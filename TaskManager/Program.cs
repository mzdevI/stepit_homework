using TaskManager;
using TaskManager.Factories.Classes;
using TaskManager.Factories.Interfaces;

ITaskManagerFactory consoleFactory = new ConsoleTaskManagerFactory();
var consoleToDoListApp = new ToDoListApp(consoleFactory);

consoleToDoListApp.Run();
