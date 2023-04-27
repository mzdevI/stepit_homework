#include <iostream>
using namespace std;

struct Student {
    char* name{};
    char* surname{};
    char* patronymic{};
    bool exams[5]{};
    int marks[10]{};

};

int main() {
    Student student;
    student.name = "Ivan";
    student.surname = "Ivanov";
    student.patronymic = "Ivanovich";

    return 0;
}
