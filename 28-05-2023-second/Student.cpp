#include "Student.h"
#include <string>

// Note: I know that you need to use (throw invalid_argument ("argumentName") to indicate error instead of my implementation


bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 4 == 0 && year % 100 != 0) {
        return true;
    } else {
        return false;
    }
}


void Student::setBirthdate(int day, int month, int year) {
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    static int currentYear = 2023;

    if (currentYear - year > 0 && currentYear - year < 99) {
        this->birthdate.year = year;
        // There are 29 days in february on a leap year
        if (isLeapYear(year)) {
            monthDays[1] = 29;
        }
    } else {
        cout << "Invalid Year" << endl;
        return;
    }

    if (month > 0 && month << 13) {
        this->birthdate.month = month;
    } else {
        cout << "Invalid Month" << endl;
    }

    if (0 < day && monthDays[month] > day) {
        this->birthdate.day = day;
    } else {
        cout << "Enter valid birthdate" << endl;
        return;
    }
}

void Student::setFio(const string &firstName, const string &lastName, const string &surname) {
    if (firstName.length() > 2) {
        this->fio.firstName = firstName;
    } else {
        cout << "Please enter a valid first name" << endl;
        return;
    }
    if (lastName.length() > 2) {
        this->fio.lastName = lastName;
    } else {
        cout << "Please enter a valid last name" << endl;
        return;
    }
    if (surname.length() > 2) {
        this->fio.surname = surname;
    } else {
        cout << "Please enter a valid surname" << endl;
        return;
    }
}


Fio Student::getStudentFIO() {
    return fio;
}

Date Student::getBirthdate() {
    return birthdate;
}

PhoneNumber Student::getPhoneNumber() {
    return phoneNumber;
}

Location Student::getLocation() {
    return location;
}

string Student::getSchoolName() {
    return schoolName;
}

Location Student::getSchoolLocation() {
    return schoolLocation;
}

unsigned int Student::getGroupNumber() {
    return groupNumber;
}


Student::Student(const string &firstName, const string &lastName, const string &surname, int day, int month, int year,
                 int countryCode,
                 int phoneNumber, const string &city, const string &country, const string &schoolName,
                 const string &citySchool,
                 const string &countrySchool, unsigned int groupNumber) {
    setFio(firstName, lastName, surname);
    setBirthdate(day, month, year);
    this->phoneNumber.countryCode = countryCode;
    this->phoneNumber.phoneNumber = phoneNumber;
    this->location.city = city;
    this->location.country = country;
    this->schoolName = schoolName;
    this->schoolLocation.city = citySchool;
    this->schoolLocation.country = countrySchool;
    this->groupNumber = groupNumber;
}

void Student::printStudentInfo() {
    cout << fio.firstName << " " << fio.lastName << " " << fio.surname << endl;
    cout << birthdate.day << " " << birthdate.month << " " << birthdate.year << endl;
    cout << phoneNumber.countryCode << " " << phoneNumber.phoneNumber << endl;
    cout << location.city << " " << location.country << endl;
    cout << schoolName << " " << schoolLocation.city << " " << schoolLocation.country << " " << groupNumber << endl;
}
