using _23_01_2024.Context;
using Microsoft.EntityFrameworkCore;

namespace _23_01_2024.Repositories;

public class MovieRepository(AppDbContext dbContext): IMovieRepository
{
    private readonly DbSet<Movie> _movies = dbContext.Set<Movie>();
    
    public async Task<IEnumerable<Movie>> GetAllAsync() => 
        await _movies.AsNoTracking().ToListAsync();

    public async Task<Movie?> GetByIdAsync(int id) =>
        await _movies.AsNoTracking().FirstOrDefaultAsync(m => m.Id == id);

    public async Task InsertAsync(Movie entity)
    {
        await _movies.AddAsync(entity);
        await dbContext.SaveChangesAsync();
    }
}
