using _18._01._2024.Models;
using System.Collections.Generic;

namespace _18._01._2024.Repository;

public interface ITaskRepository
{
    public List<Task> GetAllTask();
    public Task CreateTask(Task task);
    public Task UpdateTask(Task task);
    public bool DeleteTask(int taskId);
}
