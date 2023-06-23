#include "Processor.h"

int Processor::getCores() const {
    return cores;
}

float Processor::getClockSpeed() const {
    return clockSpeed;
}

Processor::Processor(const string &brand, const string &model, int cores, float clockSpeed) : PcComponent(brand, model) {
    this->cores = cores;
    this->clockSpeed = clockSpeed;
}

