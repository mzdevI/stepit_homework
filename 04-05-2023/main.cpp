#include <iostream>
using namespace std;

struct Boiler{
    char brand[20]{};
    char color[20]{};
    unsigned int power{};
    unsigned int volume{};
    unsigned int temperature{};

    void changeTemperature() {
        cout << "Enter temperature: ";
        cin >> temperature;
        cout << "Your new temperature: " << temperature;
    }
};

int main() {
    Boiler boiler;
    cout << "Enter brand: ";
    cin.getline(boiler.brand, 20);
    cout << "Enter color: ";
    cin.getline(boiler.color, 20);
    cout << "Enter power: ";
    cin >> boiler.power;
    cout << "Enter volume: ";
    cin >> boiler.volume;

    boiler.changeTemperature();
    cout << "Temperature set to: " << boiler.temperature << " celsius "<< endl;

    return 0;
}