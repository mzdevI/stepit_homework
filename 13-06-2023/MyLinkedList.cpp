#include "MyLinkedList.h"


template<typename T>
MyLinkedList<T>::MyLinkedList(T data) {
    head = new Node(data);
}

template<typename T>
MyLinkedList<T>::MyLinkedList(initializer_list<T> data) {
    for (const T *i = data.begin(); i < data.end(); ++i) {
        this->pushBack(*i);
    }
}

template<typename T>
void MyLinkedList<T>::pushBack(T data) {
    if (head == nullptr) {
        head = new Node(data);
        return;
    }
    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = new Node(data);
}

template<typename T>
void MyLinkedList<T>::pushFront(T data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

template<typename T>
void MyLinkedList<T>::insert(T data, int index) {
    if (index < 0)
        return;

    if (index == 0) {
        pushFront(data);
        return;
    }

    Node *current = head;
    int currentIndex = 0;
    while (current != nullptr && currentIndex < index - 1) {
        current = current->next;
        currentIndex++;
    }

    if (current != nullptr) {
        Node *newNode = new Node(data);
        newNode->next = current->next;
        current->next = newNode;
    }
}


template<typename T>
void MyLinkedList<T>::popBack() {
    if (head == nullptr)
        return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node *current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}

template<typename T>
void MyLinkedList<T>::remove(int index) {
    if (index < 0 || head == nullptr)
        return;

    if (index == 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;
    int currentIndex = 0;
    while (current->next != nullptr && currentIndex < index - 1) {
        current = current->next;
        currentIndex++;
    }

    if (current->next != nullptr) {
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

template<typename T>
void MyLinkedList<T>::removeValue(const T &value) {
    if (head == nullptr)
        return;

    if (head->data == value) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}