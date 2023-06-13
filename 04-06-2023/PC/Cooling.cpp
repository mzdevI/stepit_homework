#include "Cooling.h"

Cooling::Cooling(const string &brand, const string &model, int fanSpeed, int noiseLevel) {
    this->brand = brand;
    this->model = model;
    this->fanSpeed = fanSpeed;
    this->noiseLevel = noiseLevel;
}

string Cooling::getBrand() const {
    return brand;
}

string Cooling::getModel() const {
    return model;
}

int Cooling::getFanSpeed() const {
    return fanSpeed;
}

int Cooling::getNoiseLevel() const {
    return noiseLevel;
}