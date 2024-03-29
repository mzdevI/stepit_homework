using Microsoft.EntityFrameworkCore;

namespace _23_01_2024.Context;

public class AppDbContext : DbContext
{
    public DbSet<Movie> Movies { get; set; }
    
    public AppDbContext(DbContextOptions<AppDbContext> options) : base(options)
    {
    }
}
