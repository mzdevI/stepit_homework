#include <iostream>
using namespace std;

// Abstract Car class
class Car {
public:
    virtual ~Car() = default;
    virtual void drive() = 0;
    virtual void park() = 0;
    virtual void doWork() = 0;
};

class Sedan : public Car {
public:
    void drive() override {
        cout << "Sedan is driving on the road." << endl;
    }

    void park() override {
        cout << "Sedan is parked in the parking lot." << endl;
    }

    void doWork() override {
        cout << "Sedan is commuting to work." << endl;
    }
};

class Bus : public Car {
public:
    void drive() override {
        cout << "Bus is driving with passengers on board." << endl;
    }

    void park() override {
        cout << "Bus is parked at the bus station." << endl;
    }

    void doWork() override {
        cout << "Bus is transporting passengers." << endl;
    }
};

class Truck : public Car {
public:
    void drive() override {
        cout << "Truck is driving on the highway with cargo." << endl;
    }

    void park() override {
        cout << "Truck is parked at the loading/unloading area." << endl;
    }

    void doWork() override {
        cout << "Truck is delivering goods." << endl;
    }
};

class SportsCar : public Car {
public:
    void drive() override {
        cout << "Sports car is speeding on the racetrack." << endl;
    }

    void park() override {
        cout << "Sports car is parked in the garage." << endl;
    }

    void doWork() override {
        cout << "Sports car is not for work but for fun!" << endl;
    }
};

int main() {
    Car* sedan = new Sedan();
    Car* bus = new Bus();
    Car* truck = new Truck();
    Car* sportsCar = new SportsCar();

    delete sedan;
    delete bus;
    delete truck;
    delete sportsCar;

    return 0;
}
