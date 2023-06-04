#ifndef INC_01_06_2023_STORAGE_H
#define INC_01_06_2023_STORAGE_H

#include <string>
using namespace std;

class Storage {
private:
    string brand;
    string storageType;
    int capacity;
    float size;
    int writeSpeed;
    int readSpeed;

public:
    Storage(const string& brand, const string& storageType, int capacity, float size, int writeSpeed, int readSpeed);

    string getBrand() const;
    string getStorageType() const;
    int getCapacity() const;
    float getSize() const;
    int getWriteSpeed() const;
    int getReadSpeed() const;
};


#endif
