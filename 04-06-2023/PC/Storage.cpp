#include "Storage.h"

Storage::Storage(const string& brand, const string& storageType, int capacity, float size, int writeSpeed, int readSpeed){
    this->brand = brand;
    this->storageType = storageType;
    this->capacity = capacity;
    this->size = size;
    this->writeSpeed = writeSpeed;
    this->readSpeed = readSpeed;
}


string Storage::getBrand() const {
    return brand;
}

string Storage::getStorageType() const {
    return storageType;
}

int Storage::getCapacity() const {
    return capacity;
}

float Storage::getSize() const {
    return size;
}

int Storage::getWriteSpeed() const {
    return writeSpeed;
}

int Storage::getReadSpeed() const {
    return readSpeed;
}

