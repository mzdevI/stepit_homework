using HW_19_09_2023.Tasks;

#region Task 1
/*
static void Swap<T>(ref T a, ref T b)
{
    (a, b) = (b, a);
}

string a = "hello";
string b = "world";

Swap(ref a, ref b);
Console.WriteLine($"a = {a}, b = {b}");
*/
#endregion

#region Task 2
/*
var priorityQueue = new PriorityQueue<string>();
priorityQueue.Enqueue(new PriorityQueueItem<string>("item 1", 2));
priorityQueue.Enqueue(new PriorityQueueItem<string>("item 2", 1));
priorityQueue.Enqueue(new PriorityQueueItem<string>("item 3", 3));
priorityQueue.Dequeue();

foreach (var item in priorityQueue)
{
    Console.WriteLine($"Item: {item.Item}, Priority: {item.Priority}");
}
*/
#endregion

#region Task 3
/*
var circularBuffer = new CircularBuffer<int>(3);
circularBuffer.Enqueue(1);
circularBuffer.Enqueue(2);
circularBuffer.Dequeue();
Console.WriteLine(circularBuffer.Count);
*/
#endregion

#region Task 4
/*
var singleLinkedList = new SingleLinkedList<int>();
singleLinkedList.Add(1);
singleLinkedList.Add(2);
singleLinkedList.Add(3);

singleLinkedList.Remove(3);
*/
#endregion


#region Task 5
/*
var doubleLinkedList = new DoubleLinkedList<int>();
doubleLinkedList.Add(1);
doubleLinkedList.Add(2);
doubleLinkedList.Add(3);

doubleLinkedList.Remove(3);
*/
#endregion
