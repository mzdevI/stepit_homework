#ifndef INC_01_06_2023_RAM_H
#define INC_01_06_2023_RAM_H

#include <string>
#include "MemoryComponent.h"
using namespace std;

struct RAM:MemoryComponent {
private:
    int speed{};
    int modules{};
    string type;

public:
    RAM(const string& brand, int capacity, int speed, int modules, const string& type);

    string getBrand() const;
    int getCapacity() const;
    int getSpeed() const;
    int getModules() const;
    string getType() const;

};

#endif
