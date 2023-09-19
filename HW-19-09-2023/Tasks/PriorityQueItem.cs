namespace HW_19_09_2023.Tasks;

public class PriorityQueueItem<T>
{
    public T Item { get; }
    public int Priority { get; }

    public PriorityQueueItem(T item, int priority)
    {
        Item = item;
        Priority = priority;
    }
}