#ifndef INC_01_06_2023_POWERSUPPLY_H
#define INC_01_06_2023_POWERSUPPLY_H

#include <string>
#include "PcComponent.h"
using namespace std;

struct PowerSupply: public PcComponent {
private:
    int wattage;
    string efficiency;
    string formFactor;
    bool modular;

public:
    PowerSupply() = default;
    PowerSupply(const string& brand, const string& model, int wattage, const string& efficiency, const string& formFactor, bool modular);

    int getWattage() const;
    string getEfficiency() const;
    string getFormFactor() const;
    bool getModular() const;

};

#endif
