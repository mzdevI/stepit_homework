#include "Student.h"

#ifndef TASK_1_ASPIRANT_H
#define TASK_1_ASPIRANT_H


class Aspirant: public Student{
private:
    string researchTopic;
    string advisor;
    int thesisProgress;
public:
    Aspirant(const string& name, int age, float grade, const string& major, const string& researchTopic, const string& advisor, int thesisProgress);

    string getResearcTopic();
    string getAdvisor();
    int getThesisprogress();
};


#endif //TASK_1_ASPIRANT_H
