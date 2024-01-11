using _18._01._2024.Models;
using System;
using System.Collections.Generic;
using System.Data;

namespace _18._01._2024.Repository;

public class TaskRepository : ITaskRepository
{
    private DataTable _tasks;

    public TaskRepository(DataTable dataTable)
    {
        _tasks = dataTable;
    }

    public List<Task> GetAllTask()
    {
        List<Task> tasks = new List<Task>();

        foreach (DataRow row in _tasks.Rows)
        {
            Task task = new Task
            {
                Id = (int)row["Id"],
                Name = row["Name"].ToString(),
            };

            tasks.Add(task);
        }

        return tasks;
    }

    public Task CreateTask(Task task)
    {
        DataRow row = _tasks.NewRow();
        row["Id"] = task.Id;
        row["Name"] = task.Name;

        _tasks.Rows.Add(row);
        return task;
    }

    public Task UpdateTask(Task task)
    {
        DataRow row = _tasks.Rows.Find(task.Id);

        if (row != null)
        {
            row["Name"] = task.Name;
            return task;
        }

        throw new Exception("Task not found");
    }

    public bool DeleteTask(int taskId)
    {
        DataRow row = _tasks.Rows.Find(taskId);

        if (row != null)
        {
            _tasks.Rows.Remove(row);
            return true;
        }

        throw new Exception("Task not found");
    }
}
