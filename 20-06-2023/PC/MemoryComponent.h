#ifndef INC_01_06_2023_MEMORYCOMPONENT_H
#define INC_01_06_2023_MEMORYCOMPONENT_H

#include <string>
using namespace std;

class MemoryComponent {
protected:
    string brand;
    int capacity;

public:
    MemoryComponent(const string &brand, int capacity);

    string getBrand() const;
    int getCapacity() const;


};


#endif