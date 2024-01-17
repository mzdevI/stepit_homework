using System.Data;

namespace _18._01._2024.Data;

public class TaskDataAccess
{
    public DataTable CreateTaskTable()
    {
        DataTable dataTable = new DataTable("Tasks");

        dataTable.Columns.Add("Id", typeof(int));
        dataTable.Columns.Add("Name", typeof(string));

        return dataTable;
    }
}
