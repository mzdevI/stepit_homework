
#include "BinaryTree.h"
BinaryTree::Node::Node(Bus* bus) {
    this->bus = bus;
    left = nullptr;
    right = nullptr;
}

void BinaryTree::insert(Bus* bus) {
    root = insertHelper(root, bus);
}

Bus* BinaryTree::search(int key) {
    return searchHelper(root, key);
}

void BinaryTree::display(Bus* bus) {
    if (bus != nullptr) {
        cout << "Bus Number: " << bus->busNumber << endl;
        cout << "Driver Name: " << bus->driverFirstName << " " << bus->driverLastName << endl;
        cout << "Route Number: " << bus->routeNumber << endl;
        cout << "Number of Seats: " << bus->numberOfSeats << endl;
    } else {
        cout << "Bus not found!" << endl;
    }
}

void BinaryTree::writeToFile(const string& filename) {
    ofstream outFile(filename);

    if (!outFile) {
        cout << "Error opening the file!" << endl;
        return;
    }

    writeToFileHelper(root, outFile);

    outFile.close();
    cout << "Bus information written to the file successfully!" << endl;
}

BinaryTree::Node* BinaryTree::insertHelper(Node* node, Bus* bus) {
    if (node == nullptr) {
        return new Node(bus);
    }

    if (bus->busNumber < node->bus->busNumber) {
        node->left = insertHelper(node->left, bus);
    } else {
        node->right = insertHelper(node->right, bus);
    }

    return node;
}

Bus* BinaryTree::searchHelper(Node* node, int key) {
    if (node == nullptr || node->bus->busNumber == key) {
        return (node == nullptr) ? nullptr : node->bus;
    }

    if (key < node->bus->busNumber) {
        return searchHelper(node->left, key);
    }

    return searchHelper(node->right, key);
}

void BinaryTree::writeToFileHelper(Node* node, ofstream& outFile) {
    if (node == nullptr) {
        return;
    }

    writeToFileHelper(node->left, outFile);
    outFile << "Bus Number: " << node->bus->busNumber << endl;
    outFile << "Driver Name: " << node->bus->driverFirstName << " " << node->bus->driverLastName << endl;
    outFile << "Route Number: " << node->bus->routeNumber << endl;
    outFile << "Number of Seats: " << node->bus->numberOfSeats << endl;
    outFile << endl;
    writeToFileHelper(node->right, outFile);
}
