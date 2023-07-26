#include "User.h"

User::User(const string &username, const string &password): username(username), password(password) {}

const string& User::getUsername() const {
    return username;
}

const string& User::getPassword() const {
    return password;
}

