#ifndef INC_6_06_2023_STUDENT_H
#define INC_6_06_2023_STUDENT_H

#include <string>
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string familyName;
    int age;
    string location;

public:
    Student() = default;
    Student(const string& name, const string& familyName, int age, const string& location);

    string getName() const;
    string getFamilyName() const;
    int getAge() const;
    string getLocation() const;

    bool operator==(const Student& student) const;
    bool operator!=(const Student& student) const;
    bool operator<(const Student& student) const;
    bool operator>(const Student& student) const;

    friend ostream& operator<<(ostream& os, const Student& student);
    friend istream& operator>>(istream& is, Student& student);

};


#endif