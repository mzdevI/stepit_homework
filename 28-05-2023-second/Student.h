#ifndef INC_28_05_2023_SECOND_STUDENT_H
#define INC_28_05_2023_SECOND_STUDENT_H

#include <iostream>
#include <string>

using namespace std;


bool isLeapYear(int year);


class Fio {
public:
    string firstName;
    string lastName;
    string surname;
};


class Location {
public:
    string city;
    string country;
};


class Date {
public:
    int day;
    int month;
    int year;

};

class PhoneNumber {
public:
    int countryCode;
    int phoneNumber;

};

class Student {
private:

    Fio fio;
    Date birthdate;
    PhoneNumber phoneNumber;
    Location location;

    string schoolName;
    Location schoolLocation;
    unsigned int groupNumber;


public:
    void setFio(const string &firstName, const string &lastName, const string &surname);

    void setBirthdate(int day, int month, int year);

    Fio getStudentFIO();

    Date getBirthdate();

    PhoneNumber getPhoneNumber();

    Location getLocation();

    string getSchoolName();

    Location getSchoolLocation();

    unsigned int getGroupNumber();

    Student(const string &firstName, const string &lastName, const string &surname, int day, int month, int year, int countryCode,
            int phoneNumber, const string &city, const string &country, const string &schoolName, const string &citySchool,
            const string& countrySchool, unsigned int groupNumber);


    void printStudentInfo();

};


#endif
