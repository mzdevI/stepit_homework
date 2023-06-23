#ifndef INC_01_06_2023_PCCOMPONENT_H
#define INC_01_06_2023_PCCOMPONENT_H

#include <string>
using namespace std;

class PcComponent {
protected:
    string brand;
    string model;

public:
    PcComponent(const string& brand, const string& model);
    string getBrand();
    string getModel();
};


#endif