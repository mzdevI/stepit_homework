#include <iostream>
#include <string>
#include "Database.h"
using namespace std;

int main() {
    Database DB;
    string username, password;

    try {
        cout << "Registration\n";
        cout << "Enter username (4-16 characters, alphanumeric, _, -): ";
        cin >> username;
        cout << "Enter password (at least 8 characters, containing letters and digits): ";
        cin >> password;
        DB.registerUser(username, password);

        cout << "\nLogin\n";
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        DB.loginUser(username, password);
    } catch (const std::invalid_argument& e) {
        cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
