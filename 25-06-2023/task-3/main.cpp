#include <iostream>
using namespace std;

class TransportVehicle {
protected:
    string type;

public:
    TransportVehicle(const string& type) : type(type) {}

    virtual double calculateTime(double distance) = 0;
    virtual double calculateCost(double distance) = 0;

    void transportPassengers(double distance) {
        double time = calculateTime(distance);
        double cost = calculateCost(distance);

        cout << "Transporting passengers by " << type << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Time taken: " << time << " hours" << endl;
        cout << "Cost: $" << cost << endl;
        cout << endl;
    }
};

class Car : public TransportVehicle {
public:
    Car() : TransportVehicle("Car") {}

    double calculateTime(double distance) override {
        return distance / 60.0;
    }

    double calculateCost(double distance) override {
        return distance * 0.1;
    }
};

class Bicycle : public TransportVehicle {
public:
    Bicycle() : TransportVehicle("Bicycle") {}

    double calculateTime(double distance) override {
        return distance / 15.0;
    }

    double calculateCost(double distance) override {
        return 0.0;
    }
};

class Cart : public TransportVehicle {
public:
    Cart() : TransportVehicle("Cart") {}

    double calculateTime(double distance) override {
        return distance / 10.0;
    }

    double calculateCost(double distance) override {
        return distance * 0.05;
    }
};

int main() {
    Car car;
    Bicycle bicycle;
    Cart cart;

    double distance = 50.0;

    car.transportPassengers(distance);
    bicycle.transportPassengers(distance);
    cart.transportPassengers(distance);

    return 0;
}
