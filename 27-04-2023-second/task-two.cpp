#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
const int MONTHS = 12;

struct Date {
    int day;
    int month;
    int year;
};

struct Man {
    char surname[30];
    char name[30];
    int age;
    Date birthDate;
};

void addMan(Man*& arr, int& size, int& capacity) {
    if (size == capacity) {
        capacity *= 2;
        Man* newArr = new Man[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    cout << "Enter surname: ";
    cin >> arr[size].surname;
    cout << "Enter name: ";
    cin >> arr[size].name;
    cout << "Enter age: ";
    cin >> arr[size].age;
    cout << "Enter birthdate (dd/mm/yyyy): ";
    cin >> arr[size].birthDate.day >> arr[size].birthDate.month >> arr[size].birthDate.year;
    size++;
}

void removeMan(Man*& arr, int& size, int& capacity) {
    if (size > 0) {
        size--;
        if (size < capacity / 2) {
            capacity /= 2;
            Man* newArr = new Man[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
    }
}


void printMan(Man& man) {
    cout << man.surname << " " << man.name << " (" << man.age << " years old), ";
    cout << "birthdate: " << man.birthDate.day << "/" << man.birthDate.month << "/" << man.birthDate.year << endl;
}

void printManArray(Man arr[], int size) {
    for (int i = 0; i < size; i++) {
        printMan(arr[i]);
    }
}


void sortArrayBySurname(Man arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j].surname, arr[j + 1].surname) > 0) {
                Man temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortArrayByName(Man arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                Man temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void findBirthdayBoys(Man arr[], int size) {
    int month;
    cout << "Enter the month: ";
    cin >> month;

    cout << "Birthday boys in month " << month << ":" << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i].birthDate.month == month) {
            cout << arr[i].name << " " << arr[i].surname << " - " << arr[i].birthDate.day << "/" << arr[i].birthDate.month << "/" << arr[i].birthDate.year << endl;
        }
    }
}

void searchMan(Man arr[], int size) {
    char surname[30], name[30];
    cout << "Enter surname to search: ";
    cin >> surname;
    cout << "Enter name to search: ";
    cin >> name;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].surname, surname) == 0 && strcmp(arr[i].name, name) == 0) {
            cout << "Found: ";
            printMan(arr[i]);

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found." << endl;
    }
}

void editMan(Man arr[], int size) {
    char surname[30], name[30];
    cout << "Enter surname to edit: ";
    cin >> surname;
    cout << "Enter name to edit: ";
    cin >> name;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].surname, surname) == 0 && strcmp(arr[i].name, name) == 0) {
            cout << "Enter new surname: ";
            cin >> arr[i].surname;
            cout << "Enter new name: ";
            cin >> arr[i].name;
            cout << "Enter new age: ";
            cin >> arr[i].age;
            cout << "Enter new birthdate (dd/mm/yyyy): ";
            cin >> arr[i].birthDate.day >> arr[i].birthDate.month >> arr[i].birthDate.year;

            cout << "Edited: ";
            printMan(arr[i]);

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found." << endl;
    }
}

int main() {
    Man* manArr = new Man[MAX_SIZE];
    int size = 0;
    int capacity = MAX_SIZE;
    // Choice function
//    addMan(manArr, size, capacity);
//    removeMan(manArr, size, capacity);
//    printManArray(manArr, size);
//    sortArrayByName(manArr, size);
//    sortArrayBySurname(manArr, size);
//    findBirthdayBoys(manArr, size);
//    searchMan(manArr, size);
//    editMan(manArr, size);
    delete[] manArr;
    return 0;
}
