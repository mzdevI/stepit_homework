#include "Database.h"
#include <algorithm>
#include <regex>
#include <iostream>

void Database::registerUser(const string& username, const string& password) {
    regex usernameRegex("^[a-zA-Z0-9_-]{4,16}$");
    regex passwordRegex("^(?=.*[A-Za-z])(?=.*\\d)[A-Za-z\\d]{8,}$");

    if (!regex_match(username, usernameRegex) || !regex_match(password, passwordRegex)) {
        throw invalid_argument("Invalid username or password format.");
    }

    if (any_of(users.begin(), users.end(),
                    [&](const User& user) { return user.getUsername() == username; })) {
        throw invalid_argument("Username already taken.");
    }

    users.push_back(User(username, password));
    cout << "Registration successful!\n";
}

bool Database::loginUser(const string& username, const string& password) {
    auto userIter = find_if(users.begin(), users.end(),
                               [&](const User& user) { return user.getUsername() == username; });

    if (userIter != users.end() && userIter->getPassword() == password) {
        cout << "Login successful! Welcome, " << userIter->getUsername() << ".\n";
        return true;
    }

    cout << "Login failed. Invalid username or password.\n";
    return false;
}
