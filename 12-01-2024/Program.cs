using System.Data.SqlClient;
using Microsoft.Extensions.Configuration;

var builder = new ConfigurationBuilder();
builder.AddJsonFile("appsettings.json");

var config = builder.Build();

int ExecuteScalarQuery(string query)
{
    using SqlConnection conn = new(config.GetConnectionString("Default"));
    conn.Open();
    
    using SqlCommand command = new SqlCommand(query, conn);
    var result = command.ExecuteScalar();

    if (result != null)
    {
        return Convert.ToInt32(result);
    }
    return -1;
}

int ExecuteNonQuery(string query, SqlParameter[] parameters)
{
    using SqlConnection conn = new(config.GetConnectionString("Default"));
    conn.Open();
    
    using SqlCommand command = new SqlCommand(query, conn);
    command.Parameters.AddRange(parameters);

    return command.ExecuteNonQuery();
}


// ExecuteScalarQuery
// 1
var countEmployeesQuery = "SELECT COUNT(*) FROM Employees";
var employeeCount = ExecuteScalarQuery(countEmployeesQuery);

// 2
var maxSalaryQuery = "SELECT MAX(Salary) FROM Employees";
var maxSalary = ExecuteScalarQuery(maxSalaryQuery);

// 3
var averageAgeQuery = "SELECT AVG(Age) FROM Employees";
var averageAge = ExecuteScalarQuery(averageAgeQuery);

// ExecuteNonQuery
// 1
var insertEmployeeQuery = "INSERT INTO Employees (FirstName, LastName, Salary) VALUES (@FirstName, @LastName, @Salary)";
SqlParameter[] insertEmployeeParameters =
{
    new SqlParameter("@FirstName", "John"),
    new SqlParameter("@LastName", "Doe"),
    new SqlParameter("@Salary", 60000)
};
var rowsInserted = ExecuteNonQuery(insertEmployeeQuery, insertEmployeeParameters);

// 2
var updateSalaryQuery = "UPDATE Employees SET Salary = @NewSalary WHERE LastName = @LastName";
SqlParameter[] updateSalaryParameters =
{
    new SqlParameter("@NewSalary", 70000),
    new SqlParameter("@LastName", "Doe")
};
var rowsUpdated = ExecuteNonQuery(updateSalaryQuery, updateSalaryParameters);

// 3
var deleteEmployeeQuery = "DELETE FROM Employees WHERE LastName = @LastNameToDelete";
SqlParameter[] deleteEmployeeParameters =
{
    new SqlParameter("@LastNameToDelete", "Doe")
};
var rowsDeleted = ExecuteNonQuery(deleteEmployeeQuery, deleteEmployeeParameters);
