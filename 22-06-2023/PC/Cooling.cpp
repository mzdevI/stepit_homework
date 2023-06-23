#include "Cooling.h"


int Cooling::getFanSpeed() const {
    return fanSpeed;
}

int Cooling::getNoiseLevel() const {
    return noiseLevel;
}

Cooling::Cooling(const string &brand, const string &model, int fanSpeed, int noiseLevel) : PcComponent(brand, model){
    this->fanSpeed = fanSpeed;
    this->noiseLevel = noiseLevel;
}

