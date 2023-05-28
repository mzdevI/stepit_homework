#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student firstStudent{"John", "Doe", "David", 1, 4, 2007, 994, 12311123, "San Francisco", "USA", "Harvard", "San Francisco", "USA", 2};
    firstStudent.printStudentInfo();
    return 0;
}
