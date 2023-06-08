#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle circle1(5.0);
    Circle circle2(7.0);

    if (circle1 == circle2) {
        cout << "The radii of circle1 and circle2 are equal." << endl;
    } else {
        cout << "The radii of circle1 and circle2 are not equal." << endl;
    }

    if (circle1 > circle2) {
        cout << "The length of circle1 is greater than the length of circle2." << std::endl;
    } else {
        cout << "The length of circle1 is not greater than the length of circle2." << std::endl;
    }

    circle1 += 2.0;
    cout << "New radius of circle1 after += operation: " << circle1.getRadius() << std::endl;

    circle2 -= 3.0;
    cout << "New radius of circle2 after -= operation: " << circle2.getRadius() << std::endl;
    return 0;
}
