#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#pragma region "Task 1"

//int main() {
//    char word[100];
//    int shift;
//    cout << "Enter a word: ";
//    cin >> word;
//    cout << "Enter a shift: ";
//    cin >> shift;
//    int n = strlen(word);
//    for (int i = 0; i < n; i++) {
//        word[i] = (word[i] - 'a' + shift) % 26 + 'a'; // assuming lowercase input only
//    }
//    cout << "Encrypted word: " << word << endl;
//    return 0;
//}

#pragma endregion


#pragma region "Task 2"

//int main() {
//    char word[100], shuffled[100];
//    int shift;
//    cout << "Enter a word: ";
//    cin >> word;
//    cout << "Enter a shift: ";
//    cin >> shift;
//    int n = strlen(word);
//    for (int i = 0; i < n; i++) {
//        word[i] = (word[i] - 'a' + shift) % 26 + 'a'; // assuming lowercase input only
//    }
//    strcpy(shuffled, word);
//    srand(time(NULL));
//    for (int i = 0; i < n; i++) {
//        int j = rand() % n;
//        swap(shuffled[i], shuffled[j]);
//    }
//    cout << "Original word: " << word << endl;
//    cout << "Encrypted and shuffled word: " << shuffled << endl;
//    return 0;
//}

#pragma endregion

#pragma region "Task 3"

//void bubbleSort(int arr[], int n) {
//    bool swapped = true;
//    while (swapped) {
//        swapped = false;
//        for (int i = 1; i < n; i++) {
//            if (arr[i - 1] > arr[i]) {
//                swap(arr[i - 1], arr[i]);
//                swapped = true;
//            }
//        }
//        n--;
//    }
//}
//
//void insertionSort(int arr[], int n) {
//    for (int i = 1; i < n; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//void bubbleSort(char arr[], int n) {
//    bool swapped = true;
//    while (swapped) {
//        swapped = false;
//        for (int i = 1; i < n; i++) {
//            if (arr[i - 1] > arr[i]) {
//                swap(arr[i - 1], arr[i]);
//                swapped = true;
//            }
//        }
//        n--;
//    }
//}
//
//void insertionSort(char arr[], int n) {
//    for (int i = 1; i < n; i++) {
//        char key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//int main() {
//    int arr1[] = { 5, 2, 4, 6, 1, 3 };
//    int n1 = sizeof(arr1) / sizeof(arr1[0]);
//    bubbleSort(arr1, n1);
//    for (int i = 0; i < n1; i++) {
//        cout << arr1[i] << " ";
//    }
//    cout << endl;
//    int arr2[] = { 5, 2, 4, 6, 1, 3 };
//    int n2 = sizeof(arr2) / sizeof(arr2[0]);
//    insertionSort(arr2, n2);
//    for (int i = 0; i < n2; i++) {
//        cout << arr2[i] << " ";
//    }
//    cout << endl;
//    char arr3[] = { 'e', 'b', 'd', 'f', 'a', 'c' };
//    int n3 = sizeof(arr3) / sizeof(arr3[0]);
//    bubbleSort(arr3, n3);
//    for (int i = 0; i < n3; i++) {
//        cout << arr3[i] << " ";
//    }
//    cout << endl;
//    char arr4[] = { 'e', 'b', 'd', 'f', 'a', 'c' };
//    int n4 = sizeof(arr4) / sizeof(arr4[0]);
//    insertionSort(arr4, n4);
//    for (int i = 0; i < n4; i++) {
//        cout << arr4[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}

#pragma endregion