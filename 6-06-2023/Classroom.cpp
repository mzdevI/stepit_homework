#include "Classroom.h"


Classroom::Classroom(int grade, char group)
        : grade(grade), group(group){}


Classroom::~Classroom() {
    delete[] students;
}

void Classroom::addStudent(const Student& newStudent) {
    Student* newStudents = new Student[classSize + 1];

    for (int i = 0; i < classSize; i++) {
        newStudents[i] = students[i];
    }

    newStudents[classSize] = newStudent;

    delete[] students;

    students = newStudents;
    classSize++;
}


bool Classroom::operator==(const Classroom &classroom) const {
    return this->grade == classroom.grade && this->group == classroom.group && this->classSize == classroom.classSize;
}
bool Classroom::operator!=(const Classroom &classroom) const {
    return !(*this == classroom);
}
bool Classroom::operator<(const Classroom &classroom) const {
    return this->classSize < classroom.classSize;
}
bool Classroom::operator>(const Classroom &classroom) const {
    return this->classSize > classroom.classSize;
}

std::ostream& operator<<(std::ostream& os, const Classroom& classroom) {
    os << classroom.grade << " " << classroom.group << " " << classroom.classSize << '\n';
    for (int i = 0; i < classroom.classSize; ++i) {
        os << classroom.students[i].getName() << " " << classroom.students[i].getFamilyName() << std::endl;
    }
    return os;
}


istream &operator>>(istream &is, Classroom &classroom) {
    cout << "Enter grade: ";
    is >> classroom.grade;

    cout << "Enter class group: ";
    is >> classroom.group;

    return is;
}