#ifndef INC_23_07_2023_USER_H
#define INC_23_07_2023_USER_H

#include <string>
using namespace std;

class User {
private:
    string username;
    string password;

public:
    User(const string& username, const string& password);
    const string& getUsername() const;
    const string& getPassword() const;
};

#endif
