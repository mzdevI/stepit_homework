

#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string &name, int passportNumber, const string &nationality, Date *dateOfBirth,
                                 const string &gender, Date *dateOfIssue, Date *dateOfExpiry,
                                 const string &placeOfIssue, const string &visaType, int visaNumber,
                                 Date *visaIssueDate, Date *visaExpiryDate, const string &countryOfIssue) :
                                 Passport(name, passportNumber, nationality, dateOfBirth, gender, dateOfIssue, dateOfExpiry, placeOfIssue) {
    this->visaType = visaType;
    this->visaNumber = visaNumber;
    this->visaIssueDate = visaIssueDate;
    this->visaExpiryDate = visaExpiryDate;
    this->countryOfIssue = countryOfIssue;

}

string ForeignPassport::getVisaType() const {
    return visaType;
}

int ForeignPassport::getVisaNumber() const {
    return visaNumber;
}

string ForeignPassport::getCountryOfIssue() const {
    return countryOfIssue;
}

Date ForeignPassport::getVisaIssuedate() const {
    return *visaIssueDate;
}

Date ForeignPassport::getVisaExpiryDate() const {
    return *visaExpiryDate;
}
