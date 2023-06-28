#include "Student.h"

Student::Student(const string &name, int age, float grade, const string &major) {
    this->name = name;
    this->age = age;
    this->grade = grade;
    this->major = major;

}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

float Student::getGrade() const {
    return grade;
}

string Student::getMajor() const {
    return major;
}
