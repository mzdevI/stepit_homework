#ifndef TASK_2_DATE_H
#define TASK_2_DATE_H

class Date {
public:

    Date() = default;
    Date(int day, int month, int year);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

private:

    int day;
    int month;
    int year;
};


#endif