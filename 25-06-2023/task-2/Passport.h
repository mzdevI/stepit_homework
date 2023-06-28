#ifndef TASK_2_PASSPORT_H
#define TASK_2_PASSPORT_H

#include <string>
#include "Date.h"
using namespace std;

class Passport {
public:
    Passport(const string& name, int passportNumber, const string& nationality, Date* dateOfBirth, const string& gender, Date* dateOfIssue, Date* dateOfExpiry, const string& placeOfIssue);
    string getName() const;
    int getPassportNumber() const;
    string getNationality() const;
    Date getDateOfBirth() const;
    string getGender() const;
    Date getDateOfIssue() const;
    Date getDateOfExpiry() const;
    string getPlaceOfIssue() const;

protected:
    string name;
    int passportNumber;
    string nationality;
    Date* dateOfBirth{};
    string gender;
    Date* dateOfIssue{};
    Date* dateOfExpiry{};
    string placeOfIssue;
};


#endif