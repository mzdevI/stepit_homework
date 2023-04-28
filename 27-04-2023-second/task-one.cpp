#include <iostream>
using namespace std;


struct Student {
    char name[50];
    char group[10];
    int grades[5];
};

void printArray(Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i].name << " " << arr[i].group << " ";
        for (int j = 0; j < 5; j++) {
            cout << arr[i].grades[j] << " ";
        }
        cout << endl;
    }
}

void addStudent(Student arr[], int& size) {
    cout << "Enter student's name: ";
    cin >> arr[size].name;
    cout << "Enter student's group: ";
    cin >> arr[size].group;
    cout << "Enter student's grades(5): ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[size].grades[i];
    }
    size++;
}

void resizeArray(Student*& arr, int& size, int newSize) {
    Student* temp = new Student[newSize];
    for (int i = 0; i < size; i++) {
        strcpy(temp[i].name, arr[i].name);
        strcpy(temp[i].group, arr[i].group);
        for (int j = 0; j < 5; j++) {
            temp[i].grades[j] = arr[i].grades[j];
        }
    }
    delete[] arr;
    arr = temp;
    size = newSize;
}

void findGoodPerformingStudents(Student arr[], int size) {
    cout << "Excellent students (>75% excellent grades):\n";
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[i].grades[j] >= 4) {
                count++;
            }
        }
        double percent = (double)count / 5 * 100;
        if (percent > 75) {
            cout << arr[i].name << endl;
        }
    }
}

void findPoorPerformingStudents(Student arr[], int size) {
    cout << "Poor students (>50% grades 2 or 3):\n";
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[i].grades[j] <= 3) {
                count++;
            }
        }
        double percent = (double)count / 5 * 100;
        if (percent > 50) {
            cout << arr[i].name << endl;
        }
    }
}

int main() {
    int capacity = 10;
    int size = 0;
    Student* arr = new Student[capacity];

    addStudent(arr, size);
    addStudent(arr, size);
    printArray(arr, size);
    findGoodPerformingStudents(arr, size);
    findPoorPerformingStudents(arr, size);
    resizeArray(arr, size, 20);

    delete[] arr;
    return 0;
}
