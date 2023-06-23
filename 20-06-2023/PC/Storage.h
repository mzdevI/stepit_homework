#ifndef INC_01_06_2023_STORAGE_H
#define INC_01_06_2023_STORAGE_H

#include <string>
#include "MemoryComponent.h"
using namespace std;

class Storage: public MemoryComponent {
private:
    string storageType;
    float size;
    int writeSpeed;
    int readSpeed;

public:
    Storage() = default;
    Storage(const string& brand, int capacity, const string& storageType, float size, int writeSpeed, int readSpeed);
    string getStorageType() const;
    float getSize() const;
    int getWriteSpeed() const;
    int getReadSpeed() const;
};

#endif
