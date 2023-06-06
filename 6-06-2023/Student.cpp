#include "Student.h"

Student::Student(const string& name, const string& familyName, int age, const string& location) {
    this->name = name;
    this->familyName = familyName;
    this->age = age;
    this->location = location;

}
string Student::getName() const {
    return name;
}
string Student::getFamilyName() const {
    return familyName;
}
int Student::getAge() const {
    return age;
}
string Student::getLocation() const {
    return location;
}


bool Student::operator==(const Student &student) const {
    return this->name == student.name && this->familyName == student.familyName && this->age == student.age && this->location == student.location;
}
bool Student::operator!=(const Student &student) const {
    return !(*this == student);
}
bool Student::operator<(const Student &student) const {
    return this->age < student.age;
}
bool Student::operator>(const Student &student) const {
    return this->age > student.age;
}

ostream &operator<<(ostream &os, const Student& student) {
    os << student.name << " " << student.familyName << " " << student.age << " " << student.location;
    return os;
}

istream &operator>>(istream &is, Student& student) {
    cout << "Enter name: ";
    is >> student.name;

    cout << "Enter family name: ";
    is >> student.familyName;

    cout << "Enter age: ";
    is >> student.age;

    cout << "Enter location: ";
    is >> student.location;

    return is;
}
