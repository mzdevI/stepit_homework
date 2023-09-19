namespace HW_19_09_2023.Tasks;
using System.Collections.Generic;

public class PriorityQueue<T> {
    
    private readonly List<PriorityQueueItem<T>> _queue = new();

    // Add item to que based on priority
    public void Enqueue(PriorityQueueItem<T> priorityQueueItem)
    {
        _queue.Add(priorityQueueItem);
        _queue.Sort((a, b) => a.Priority.CompareTo(b.Priority));
    }

    // Remove item from queue based on priority
    public T Dequeue()
    {
        if (_queue.Count == 0)
            throw new InvalidOperationException("Queue is empty.");

        PriorityQueueItem<T> item = _queue[0];
        _queue.RemoveAt(0);
        return item.Item;
    }
    
    // To see queue count
    public int Count => _queue.Count;

    // To iterate over the Queue
    public IEnumerator<PriorityQueueItem<T>> GetEnumerator()
    {
        foreach (var item in _queue)
        {
            yield return item;
        }
    }
}