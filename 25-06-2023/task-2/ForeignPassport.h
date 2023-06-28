#ifndef TASK_2_FOREIGNPASSPORT_H
#define TASK_2_FOREIGNPASSPORT_H

#include "Passport.h"

class ForeignPassport: public Passport {
public:
    ForeignPassport(const string& name, int passportNumber, const string& nationality, Date* dateOfBirth, const string& gender, Date* dateOfIssue, Date* dateOfExpiry, const string& placeOfIssue, const string& visaType, int visaNumber, Date* visaIssueDate, Date* visaExpiryDate, const string& countryOfIssue);
    string getVisaType() const;
    int getVisaNumber() const;
    string getCountryOfIssue() const;
    Date getVisaIssuedate() const;
    Date getVisaExpiryDate() const;

private:
    string visaType;
    int visaNumber;
    Date* visaIssueDate{};
    Date* visaExpiryDate{};
    string countryOfIssue;
};


#endif
