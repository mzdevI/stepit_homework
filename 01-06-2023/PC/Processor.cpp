#include "Processor.h"

Processor::Processor(const string &brand, const string &model, int cores, float clockSpeed) {
    this->brand = brand;
    this->model = model;
    this->cores = cores;
    this->clockSpeed = clockSpeed;
}

string Processor::getBrand() const {
    return brand;
}

string Processor::getModel() const {
    return model;
}

int Processor::getCores() const {
    return cores;
}

float Processor::getClockSpeed() const {
    return clockSpeed;
}