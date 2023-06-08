#include "Circle.h"
Circle::Circle(double radius) : radius(radius) {}

bool Circle::operator==(const Circle& other) const {
    return radius == other.radius;
}

bool Circle::operator>(const Circle& other) const {
    return radius > other.radius;
}

Circle &Circle::operator+=(double value) {
    radius += value;
    return *this;
}

Circle &Circle::operator-=(double value) {
    radius -= value;
    return *this;
}

double Circle::getRadius() const {
    return radius;
}