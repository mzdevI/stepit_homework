namespace HW_19_09_2023.Tasks;

public class CircularBuffer<T>
{
    private T[] buffer;
    private int head;
    private int tail;
    private int size;
    private int count;

    public CircularBuffer(int size)
    {
        this.size = size;
        buffer = new T[size];
        head = 0;
        tail = 0;
        count = 0;
    }

    public void Enqueue(T item)
    {
        if (count == size)
        {
            throw new InvalidOperationException("Buffer is full.");
        }

        buffer[tail] = item;
        tail = (tail + 1) % size;
        count++;
    }

    public T Dequeue()
    {
        if (count == 0)
        {
            throw new InvalidOperationException("Buffer is empty.");
        }

        T item = buffer[head];
        head = (head + 1) % size;
        count--;
        return item;
    }

    public int Count => count;
}