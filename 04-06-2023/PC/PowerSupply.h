#ifndef INC_01_06_2023_POWERSUPPLY_H
#define INC_01_06_2023_POWERSUPPLY_H

#include <string>
using namespace std;

struct PowerSupply {
private:
    string brand;
    int wattage;
    string efficiency;
    string formFactor;
    bool modular;

public:
    PowerSupply(const string& brand, int wattage, const string& efficiency, const string& formFactor, bool modular);

    string getBrand() const;
    int getWattage() const;
    string getEfficiency() const;
    string getFormFactor() const;
    bool getModular() const;

};

#endif
