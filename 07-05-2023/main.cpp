#include <iostream>

using namespace std;

enum Major {
    CS,
    IT,
    SE,
    CE,
    EE,
    ME,
    IE,
    BA,
    MA,
    PS,
    LA,
    EN,
    FI,
    CH,
    BI,
    PH,
    HI,
    MU,
    OT
};

struct Student {
    char name[30]{};
    char surname[30]{};
    int age{};
    enum Major major{};
    int averageGrade{};
    int year{};
};

struct Academy {
    char name[30]{};
    char city[30]{};
    int studentsCount{};
    Student *students = new Student[studentsCount]{};

    void addStudent(Student student) {
        auto *newStudents = new Student[studentsCount + 1];
        for (int i = 0; i < studentsCount; i++) {
            newStudents[i] = students[i];
        }
        newStudents[studentsCount] = student;
        delete[] students;
        students = newStudents;
        studentsCount++;
    }

    void removeStudent(int index) {
        auto *newStudents = new Student[studentsCount - 1];
        for (int i = 0; i < index; i++) {
            newStudents[i] = students[i];
        }
        for (int i = index + 1; i < studentsCount; i++) {
            newStudents[i - 1] = students[i];
        }
        delete[] students;
        students = newStudents;
        studentsCount--;
    }

    void printStudents() const {
        for (int i = 0; i < studentsCount; i++) {
            cout << students[i].name << " " << students[i].surname << endl;
        }
    }
};

int main() {
    Academy academy;
    strcpy(academy.name, "Academy");
    strcpy(academy.city, "City");

    academy.studentsCount = 2;
    academy.students[0] = {"John", "Doe", 18, CS, 12, 2020};
    academy.students[1] = {"Alex", "Doe", 18, SE, 12, 2020};

    academy.addStudent({"Jane", "Doe", 18, IT, 12, 2020});
    academy.printStudents();
    academy.removeStudent(0);

    cout << "\nAfter removing the first student:" << endl;
    academy.printStudents();
    return 0;
}
