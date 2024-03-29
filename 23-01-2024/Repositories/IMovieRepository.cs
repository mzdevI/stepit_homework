using _23_01_2024.Context;

namespace _23_01_2024.Repositories;

public interface IMovieRepository
{
    public Task<IEnumerable<Movie>> GetAllAsync();
    public Task<Movie?> GetByIdAsync(int id);
    public Task InsertAsync(Movie entity);
}
