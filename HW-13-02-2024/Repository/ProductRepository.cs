using System.Data.SqlClient;
using Dapper;
using HW_13_02_2024.Models;

namespace HW_13_02_2024.Repository;

public class ProductRepository
{
    private readonly string _connectionString;

    public ProductRepository(string connectionString)
    {
        _connectionString = connectionString;
    }

    public IEnumerable<Product> GetAllProducts()
    {
        using var connection = new SqlConnection(_connectionString);
        connection.Open();
        
        return connection.Query<Product>("SELECT * FROM Products");
    }
}
