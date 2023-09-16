namespace HW_10_09_2023.Tasks;

public class BookList
{
    private readonly List<Book> _books = new();

    public void AddBook(string title, string author)
    {
        _books.Add(new Book(title, author));
    }

    public bool ContainsBook(string title)
    {
        foreach (var book in _books)
        {
            if (book.Title == title)
            {
                return true;
            }
        }
        return false;
    }

    public void RemoveBook(string title)
    {
        var bookToRemove = _books.FirstOrDefault(book => book.Title == title);

        if (bookToRemove != null)
        {
            _books.Remove(bookToRemove);
        }
    }

    // Indexer to access books by index (myBook[1])
    public Book this[int index]
    {
        get
        {
            if (index >= 0 && index < _books.Count)
            {
                return _books[index];
            }
            throw new IndexOutOfRangeException("Index is out of range.");
        }
    }

    public static BookList operator +(BookList bookList, Book book)
    {
        bookList.AddBook(book.Title, book.Author);
        return bookList;
    }

    public static BookList operator -(BookList bookList, string title)
    {
        bookList.RemoveBook(title);
        return bookList;
    }

    public IEnumerator<Book> GetEnumerator()
    {
        return _books.GetEnumerator();
    }
}
