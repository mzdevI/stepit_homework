#ifndef INC_13_06_2023_MYLINKEDLIST_H
#define INC_13_06_2023_MYLINKEDLIST_H


#include <string>
#include <iostream>

using namespace std;

template<typename T>
class MyLinkedList {
public:
    struct Node {
        T data;
        Node *next{};

        Node(const T &data, Node *next = nullptr);
    };

    MyLinkedList() = default;

    MyLinkedList(T data);

    MyLinkedList(initializer_list<T> data);

    void pushBack(T data);

    void pushFront(T data);

    void insert(T data, int index);

    void popBack();

    void remove(int index);

    void removeValue(const T &value);


    friend ostream &operator<<(ostream &os, const MyLinkedList &list) {
        Node *current = list.head;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next;
        }
        return os;
    }

private:
    Node *head{};
};

#endif
