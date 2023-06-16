#include <string>
#include <iostream>
#include "MyLinkedList.h"

using namespace std;

int main() {
    MyLinkedList<string> list({"Hello", "World", "!"});
    cout << list << endl;
    return 0;
}