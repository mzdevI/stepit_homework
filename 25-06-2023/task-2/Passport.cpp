#include "Passport.h"

Passport::Passport(const string &name, int passportNumber, const string &nationality, Date *dateOfBirth,
                   const string &gender, Date *dateOfIssue, Date *dateOfExpiry, const string &placeOfIssue) {
    this->name = name;
    this->passportNumber = passportNumber;
    this->nationality = nationality;
    this->dateOfBirth = dateOfBirth;
    this->gender = gender;
    this->dateOfIssue = dateOfIssue;
    this->dateOfExpiry = dateOfExpiry;
    this->placeOfIssue = placeOfIssue;

}

string Passport::getName() const {
    return name;
}

int Passport::getPassportNumber() const {
    return passportNumber;
}

string Passport::getNationality() const {
    return nationality;
}

string Passport::getGender() const {
    return gender;
}

Date Passport::getDateOfBirth() const {
    return *dateOfBirth;
}

Date Passport::getDateOfIssue() const {
    return *dateOfIssue;
}

Date Passport::getDateOfExpiry() const {
    return *dateOfExpiry;
}

string Passport::getPlaceOfIssue() const {
    return placeOfIssue;
}
