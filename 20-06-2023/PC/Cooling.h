#ifndef INC_01_06_2023_COOLING_H
#define INC_01_06_2023_COOLING_H

#include <string>
#include "PcComponent.h"
using namespace std;

class Cooling: public PcComponent {
private:
    int fanSpeed;
    int noiseLevel;

public:
    Cooling() = default;
    Cooling(const string& brand, const string& model, int fanSpeed, int noiseLevel);

    int getFanSpeed() const;
    int getNoiseLevel() const;
};


#endif
