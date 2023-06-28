#ifndef TASK_1_STUDENT_H
#define TASK_1_STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    Student(const string& name, int age, float grade, const string& major);

    string getName() const;
    int getAge() const;
    float getGrade() const;
    string getMajor() const;

protected:
    string name;
    int age;
    float grade;
    string major;
};


#endif