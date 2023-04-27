#ifndef TEST_ENVIROMENT_UTILS_H
#define TEST_ENVIROMENT_UTILS_H

void removeProduct(char**& arr, uint16_t& index, int& arrSize);
void removeElement(unsigned int*& arr, uint16_t& index, int& arrSize);
void remove(uint16_t& index, int& arrSize, char**& products, unsigned int*& productInventory, float*& productPrice, float*& discountItems, int*& discountBundle);
void addItem(char**& products, unsigned int*& productInventory, float*& productPrice, int*& discountBundle,  float*& discountItems, int& arrSize);
#endif //TEST_ENVIROMENT_UTILS_H