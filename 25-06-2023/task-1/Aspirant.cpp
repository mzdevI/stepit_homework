#include "Aspirant.h"

Aspirant::Aspirant(const string &name, int age, float grade, const string &major, const string &researchTopic,
                   const string &advisor, int thesisProgress): Student(name, age, grade, major) {
    this->researchTopic = researchTopic;
    this->advisor = advisor;
    this->thesisProgress = thesisProgress;
}

string Aspirant::getResearcTopic() {
    return researchTopic;
}

string Aspirant::getAdvisor() {
    return advisor;
}

int Aspirant::getThesisprogress() {
    return thesisProgress;
}
