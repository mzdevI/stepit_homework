namespace HW_19_09_2023.Tasks;
using System.Collections.Generic;

public class DoubleLinkedList<T>
{
    private class Node
    {
        public T Data { get; set; }
        public Node? Next { get; set; }
        public Node? Previous { get; set; }

        public Node(T data)
        {
            Data = data;
            Next = null;
            Previous = null;
        }
    }

    private Node? _head = null;
    private Node? _tail = null;
    private int _count = 0;

    public void Add(T item)
    {
        var newNode = new Node(item);
        if (_head == null)
        {
            _head = newNode;
            _tail = newNode;
        }
        else
        {
            newNode.Next = _head;
            _head.Previous = newNode;
            _head = newNode;
        }
        _count++;
    }

    public void Remove(T item)
    {
        if (_head == null)
            throw new InvalidOperationException("The linked list is empty, and no items can be removed.");

        if (Equals(_head.Data, item))
        {
            _head = _head.Next;
            if (_head != null)
                _head.Previous = null;
            else
                _tail = null;
            _count--;
            return;
        }

        Node current = _head;
        while (current.Next != null)
        {
            if (Equals(current.Next.Data, item))
            {
                current.Next = current.Next.Next;
                if (current.Next != null)
                    current.Next.Previous = current;
                else
                    _tail = current;
                _count--;
                return;
            }
            current = current.Next;
        }
        throw new InvalidOperationException($"The item '{item}' was not found in the linked list.");
    }
    
}
