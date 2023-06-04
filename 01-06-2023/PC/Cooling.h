#ifndef INC_01_06_2023_COOLING_H
#define INC_01_06_2023_COOLING_H

#include <string>
using namespace std;

class Cooling {
private:
    string brand;
    string model;
    int fanSpeed;
    int noiseLevel;

public:
    Cooling(const string& brand, const string& model, int fanSpeed, int noiseLevel);

    string getBrand() const;
    string getModel() const;
    int getFanSpeed() const;
    int getNoiseLevel() const;
};


#endif
