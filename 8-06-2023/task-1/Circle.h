#ifndef TASK_1_CIRCLE_H
#define TASK_1_CIRCLE_H


class Circle {
private:
    double radius;

public:
    Circle(double radius);

    bool operator==(const Circle& other) const;

    bool operator>(const Circle& other) const;
    Circle& operator+=(double value);

    Circle& operator-=(double value);

    double getRadius() const;
};


#endif
