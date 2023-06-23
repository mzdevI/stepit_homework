#include "MemoryComponent.h"

MemoryComponent::MemoryComponent(const string& brand, int capacity) {
    this->brand = brand;
    this->capacity = capacity;
}

string MemoryComponent::getBrand() const {
    return brand;
}

int MemoryComponent::getCapacity() const {
    return capacity;
}
