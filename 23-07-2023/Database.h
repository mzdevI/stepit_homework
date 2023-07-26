#ifndef INC_23_07_2023_DATABASE_H
#define INC_23_07_2023_DATABASE_H

#include <vector>
#include "user.h"
using namespace std;

class Database {
private:
    vector<User> users;

public:
    void registerUser(const string& username, const string& password);
    bool loginUser(const string& username, const string& password);
};


#endif
