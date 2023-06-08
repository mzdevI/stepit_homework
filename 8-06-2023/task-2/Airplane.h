#ifndef TASK_2_AIRPLANE_H
#define TASK_2_AIRPLANE_H

#include <string>
using namespace std;

class Airplane {
private:
    string type;
    int passengers;

public:
    Airplane(const string& type, int passengers);

    bool operator==(const Airplane& other);

    Airplane& operator++();
    Airplane& operator--();

    bool operator>(const Airplane& other) const;

    int getMaxPassengers() const;
    int getPassengers() const;
};


#endif
