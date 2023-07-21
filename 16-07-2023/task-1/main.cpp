#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int calculateDecimalValue(const string& inputString) {
    int result = 0;

    for (char ch : inputString) {
        if (isdigit(ch)) {
            int digit = ch - '0';
            result = result * 10 + digit;
        } else {
            throw std::invalid_argument("Invalid character in the input string");
        }
    }

    if (result < 0) {
        throw overflow_error("Value exceeds the int range");
    }

    return result;
}

int main() {
    try {
        string input;
        cout << "Enter the decimal number as a string: ";
        cin >> input;

        int value = calculateDecimalValue(input);
        cout << "Calculated value: " << value << endl;
    } catch (const std::invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const std::overflow_error& e) {
        cout << "Error: " << e.what() << endl;
    } catch (...) {
        cout << "Unknown error occurred." << endl;

    }    return 0;
}
