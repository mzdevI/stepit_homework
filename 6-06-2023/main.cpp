#include <iostream>
#include "classroom.h"
#include "Student.h"

int main() {
    Classroom classroom{10, 'a'};
    Student studentOne{"John", "Allen", 18, "LA"};
    Student studentTwo{"Alex", "Steve", 18, "SF"};
    classroom.addStudent(studentTwo);
    classroom.addStudent(studentOne);

    cout << classroom;
    return 0;
}
