#include <iostream>
#include <fstream>
#include <regex>
#include <exception>


class Transport {
public:
    virtual ~Transport() { }

    virtual bool operator==(const Transport& other) const {
        return typeid(*this) == typeid(other);
    }

    virtual bool operator!=(const Transport& other) const {
        return !(*this == other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Transport& transport) {
        os << "This is a Transport object.";
        return os;
    }

    static std::regex GetRegex() {
        return std::regex("This is a Transport object.");
    }
};

class Car : public Transport {
public:
    ~Car() { }

    bool operator==(const Transport& other) const override {
        return typeid(*this) == typeid(other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "This is a Car object.";
        return os;
    }

    static std::regex GetRegex() {
        return std::regex("This is a Car object.");
    }
};

class Plane : public Transport {
public:
    ~Plane() { }

    bool operator==(const Transport& other) const override {
        return typeid(*this) == typeid(other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Plane& plane) {
        os << "This is a Plane object.";
        return os;
    }

    static std::regex GetRegex() {
        return std::regex("This is a Plane object.");
    }
};

class Boat : public Transport {
public:
    ~Boat() { }

    bool operator==(const Transport& other) const override {
        return typeid(*this) == typeid(other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Boat& boat) {
        os << "This is a Boat object.";
        return os;
    }

    static std::regex GetRegex() {
        return std::regex("This is a Boat object.");
    }
};

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
            return "Custom exception message";
    }
};

int main() {

    Transport* transport1 = new Transport();
    Transport* transport2 = new Car();
    Transport* transport3 = new Plane();
    Transport* transport4 = new Boat();

    try {
        throw MyException();
    } catch (const MyException& e) {
        std::ofstream csvFile("exceptions.csv", std::ios::app);

        csvFile << e.what() << std::endl;

        csvFile.close();
    }

    std::cout << (*transport1 == *transport2) << std::endl;
    std::cout << *transport1 << std::endl;

    delete transport1;
    delete transport2;
    delete transport3;
    delete transport4;

    return 0;
}
