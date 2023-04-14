#include <iostream>
#include "utils.h"
using namespace std;

float action(const int arr1[], const int arr2[], const int arr1Size, const int arr2Size) {

    float (*funcArr[]) (const int *, int) = {max, min, avg};
    int choice{};
    float result{};
    int newSize = arr1Size + arr2Size;
    int* newArr = new int[newSize]{};
    int n{};

    for (int i{}; i < arr1Size; i++) {
        newArr[n] = arr1[i];
        n++;
    }

    for (int i{}; i < arr2Size; i++) {
        newArr[n] = arr2[i];
        n++;
    }
    cout
            << "1 - Max" << endl
            << "2 - Min" << endl
            << "3 - Avg" << endl;
    cin >> choice;

    result = funcArr[choice - 1](newArr, newSize);
    delete[] newArr;
    return result;
}

int main() {
    int arrOne[] {1, 2, 3, 4, 5};
    int arrTwo[] {6, 7, 8, 9, 10};
    float result = action(arrOne, arrTwo, size(arrOne), size(arrTwo));
    cout << result;
    return 0;
}