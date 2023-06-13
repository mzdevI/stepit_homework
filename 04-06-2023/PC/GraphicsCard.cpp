#include "GraphicsCard.h"

GraphicsCard::GraphicsCard(const string &brand, const string &model, int memory, const string &memoryType,
                           int coreClock, int boostClock, int powerConsumption) {
    this->brand = brand;
    this->model = model;
    this->memory = memory;
    this->memoryType = memoryType;
    this->coreClock = coreClock;
    this->boostClock = boostClock;
    this->powerConsumption = powerConsumption;

}

string GraphicsCard::getBrand() const {
    return brand;
}

string GraphicsCard::getModel() const {
    return model;
}

int GraphicsCard::getMemory() const {
    return memory;
}

string GraphicsCard::getMemoryType() const {
    return memoryType;
}

int GraphicsCard::getCoreClock() const {
    return coreClock;
}

int GraphicsCard::getBoostClock() const {
    return boostClock;
}

int GraphicsCard::getPowerConsumption() const {
    return powerConsumption;
}
