#include <iostream>
using namespace std;

void removeProduct(char**& arr, uint16_t & index, int& arrSize) {
    if (index < 0 || index >= arrSize) {
        cout << "Invalid index." << endl;
        return; // Ends the function
    }

    delete[] arr[index];
    for (int i = index; i < arrSize - 1; i++) {
        arr[i] = arr[i + 1];
    }
    delete[] arr[arrSize - 1];
    arrSize--;
    char** temp = new char*[arrSize];
    for (int i = 0; i < arrSize; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
}

template <typename T>
void removeElement(T*& arr, uint16_t& index, int& arrSize) {
    auto* temp = new T[arrSize - 1];
    for (int i = 0; i < arrSize - 1; i++) {
        if (i < index) {
            temp[i] = arr[i];
        }
        else {
            temp[i] = arr[i + 1];
        }
    }
    delete[] arr;
    arr = temp;
    arrSize--;
}

// Passed by reference for performance
void remove(uint16_t& index, int& arrSize, char**& products, unsigned int*& productInventory, float*& productPrice, float*& discountItems, int*& discountBundle){
    removeProduct(products, index, arrSize);
    removeElement(productInventory, index, arrSize);
    removeElement(productPrice, index, arrSize);
    removeElement(discountItems, index, arrSize);
    removeElement(discountBundle, index, arrSize);

}

void addItem(char**& products, unsigned int*& productInventory, float*& productPrice, int*& discountBundle,  float*& discountItems, int& arrSize) {

    // Add Item
    arrSize++;
    auto **tempProducts = new char *[arrSize]{};
    auto *tempProductInventory = new unsigned int[arrSize]{};
    auto *tempProductPrice = new float[arrSize]{};
    auto *tempDiscountItems = new float[arrSize]{};
    auto *tempDiscountBundle = new int[arrSize+1]{};

    for (int i = 0; i < arrSize - 1; i++) {
        tempProducts[i] = new char[strlen(products[i]) + 1];
        strcpy(tempProducts[i], products[i]);
        tempProductInventory[i] = productInventory[i];
        tempProductPrice[i] = productPrice[i];
        tempDiscountItems[i] = discountItems[i];
        tempDiscountBundle[i] = discountBundle[i];
    }

    cout << "Enter product name: ";
    tempProducts[arrSize - 1] = new char[20];
    cin.ignore();
    cin.getline(tempProducts[arrSize - 1], 20);

    cout << "Enter product inventory: ";
    cin >> tempProductInventory[arrSize - 1];
    cout << "Enter product price: ";
    cin >> tempProductPrice[arrSize - 1];
    cout << "Enter product discount: ";
    cin >> tempDiscountItems[arrSize - 1];

    for (int i = 0; i < arrSize - 1; i++) {
        delete[] products[i];
    }
    delete[] products;
    delete[] productInventory;
    delete[] productPrice;
    delete[] discountItems;
    delete[] discountBundle;

    products = tempProducts;
    productInventory = tempProductInventory;
    productPrice = tempProductPrice;
    discountItems = tempDiscountItems;
    discountBundle = tempDiscountBundle;

}