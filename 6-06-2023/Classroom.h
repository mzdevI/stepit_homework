#ifndef INC_6_06_2023_CLASSROOM_H
#define INC_6_06_2023_CLASSROOM_H

#include "Student.h"
#include <iostream>

class Classroom {
private:
    int grade;
    char group;
    int classSize{};
    Student* students = new Student[classSize];

public:

    Classroom(int grade, char group);

    ~Classroom();

    void addStudent(const Student &newStudent);

    bool operator==(const Classroom &classroom) const;
    bool operator!=(const Classroom &classroom) const;
    bool operator<(const Classroom &classroom) const;
    bool operator>(const Classroom &classroom) const;

    friend ostream& operator<<(ostream& os, const Classroom& classroom);
    friend istream& operator>>(istream& is, Classroom& classroom);

};


#endif
