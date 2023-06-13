#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class MyVector {
private:
    T *arr{};
    size_t length{};
    size_t capacity{};
public:
    MyVector(size_t capacity) {
        this->capacity = capacity;
    }

    MyVector(initializer_list<T> list) {
        this->capacity = list.size() * 2;
        this->length = list.size();
        this->arr = new T[this->capacity]{};

        for (auto i = list.begin(); i < list.end(); ++i) {
            this->arr[i - list.begin()] = *i;
        }
    }

    // Add element to the last of the array
    void append(T element) {
        if (this->length == this->capacity) {
            this->capacity *= 2;
            T *new_arr = new T[this->capacity]{};
            for (size_t i = 0; i < this->length; ++i) {
                new_arr[i] = this->arr[i];
            }
            delete[] this->arr;
            this->arr = new_arr;
        }
        this->arr[this->length] = element;
        this->length++;
    }

    // Add element by index
    void insert(T element, int index) {
        if (index == this->capacity) {
            append(element);
        }
        else {
            this->arr[index] = element;
        }
    }

    // Remove last element
    void pop() {
        this->length--;
    }

    // Remove element by element
    void remove(const T& element) {
        size_t index = 0;
        while (index < this->length) {
            if (this->arr[index] == element) {
                for (size_t i = index; i < this->length - 1; ++i) {
                    this->arr[i] = this->arr[i + 1];
                }
                this->length--;
                return;
            }
            index++;
        }
    }

    // Remove element by index
    void removeIndex(size_t index) {
        if (index < this->length) {
            for (size_t i = index; i < this->length - 1; ++i) {
                this->arr[i] = this->arr[i + 1];
            }
            this->length--;
        }
    }

    // Get element by index
    T get(int index) {
        if (index < this->length) {
            return this->arr[index];
        }
    }


    size_t getLength() const {
        return this->length;
    }

    friend ostream &operator<<(ostream &os, MyVector<T> &v) {
        for (size_t i = 0; i < v.length; ++i) {
            os << v.arr[i] << ' ';
        }
        return os;
    }

    T &operator[](size_t index) {
        if(index < this->length) {
            return this->arr[index];
        }
    }
};

int main() {

    MyVector<int> v1 = {1, 2, 3, 4, 5};
    v1.append(6);
    cout << v1 << endl;
    v1.pop();
    cout << v1 << endl;
    v1.remove(5);
    cout << v1 << endl;
    v1.removeIndex(0);
    cout << v1 << endl;

    cout << v1.get(1);

    return 0;
}
