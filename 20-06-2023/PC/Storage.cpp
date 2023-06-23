#include "Storage.h"

string Storage::getStorageType() const {
    return storageType;
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

Storage::Storage(const string &brand, int capacity, const string &storageType, float size, int writeSpeed,
                 int readSpeed): MemoryComponent(brand, capacity) {
    this->storageType = storageType;
    this->size = size;
    this->writeSpeed = writeSpeed;
    this->readSpeed = readSpeed;
}

