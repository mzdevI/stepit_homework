#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Stack {
private:
    T* data;
    int capacity;
    int topIndex;

public:
    Stack(int size) : capacity(size), topIndex(-1) {
        data = new T[capacity];
    }

    ~Stack() {
        delete[] data;
    }

    void push(const T& value) {
        if (topIndex == capacity - 1) {
            throw overflow_error("Cannot push more elements.");
        }

        data[++topIndex] = value;
    }

    void pop() {
        if (topIndex == -1) {
            throw underflow_error("Cannot pop from an empty stack.");
        }

        --topIndex;
    }

    T& first() const {
        if (topIndex == -1) {
            throw underflow_error("The stack is empty.");
        }

        return data[topIndex];
    }

    int size() const {
        return (topIndex + 1);
    }
};

int main() {
    try {
        Stack<int> myStack(5);

        myStack.push(10);
        myStack.push(20);
        myStack.push(30);

        cout << "Top element: " << myStack.first() << endl;

        myStack.pop();

        cout << "Current size of the stack: " << myStack.size() << endl;

        myStack.pop();
        myStack.pop();
        myStack.pop();

    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
