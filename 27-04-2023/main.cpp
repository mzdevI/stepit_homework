#include <iostream>
using namespace std;

struct Student {
    char name[30]{};
    char surname[30]{};
    char patronymic[30]{};
    bool exams[5]{};
    int marks[10]{};

};

void createClass(Student (&students)[], int studentsCount) {
    for (int i{}; i < studentsCount; i++) {
        cout << "Enter name: ";
        cin.getline(students[i].name, 30);
        cout << "Enter surname: ";
        cin.getline(students[i].surname, 30);
        cout << "Enter patronymic: ";
        cin.getline(students[i].patronymic, 30);

        cout << "Enter exams: ";
        for (int j{}; j < 5; j++) {
            cin >> students[i].exams[j];
            cin.ignore();
        }
        cout << "Enter marks: ";
        for (int j{}; j < 10; j++) {
            cin >> students[i].marks[j];
            cin.ignore();
        }
    }
}

void printClass(Student (&students)[], int studentsCount) {
    for (int i{}; i < studentsCount; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Surname: " << students[i].surname << endl;
        cout << "Patronymic: " << students[i].patronymic << endl;
        cout << "" << endl;
    }
}

void printGPA(Student (&students)[], int studentsCount) {
    for (int i{}; i < studentsCount; i++) {
        int sum{};
        for (int j{}; j < 10; j++) {
            sum += students[i].marks[j];
        }
        cout << "GPA: " << sum / 10 << endl;
    }
}

void printStudentGrades(Student (&students)[], const int studentsCount, const char (&studentName)[]) {
    for (int i{}; i < studentsCount; i++){
        if (strcmp(students[i].name, studentName) == 0) {
            for (int j{}; j < 10; j++) {
                cout << "Grade: " << students[i].marks[j] << endl;
            }
            return; // Exits the loop and ends the function
        }
    }
}


int main() {
    const int studentsCount = 3;
    Student students[studentsCount]{};
    createClass(students, studentsCount);
//    printClass(students, studentsCount);
//    printGPA(students, studentsCount);
//    printStudentGrades(students, studentsCount, students[0].name);

    return 0;
}
