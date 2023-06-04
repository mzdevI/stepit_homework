#ifndef INC_01_06_2023_PROCESSOR_H
#define INC_01_06_2023_PROCESSOR_H

#include <string>
using namespace std;

struct Processor {
private:
    string brand;
    string model;
    int cores;
    float clockSpeed;

public:
    Processor(const string& brand, const string& model, int cores, float clockSpeed);

    string getBrand() const;
    string getModel() const;
    int getCores() const;
    float getClockSpeed() const;
};



#endif
