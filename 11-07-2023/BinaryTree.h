#ifndef INC_11_07_2023_BINARYTREE_H
#define INC_11_07_2023_BINARYTREE_H
#include "iostream"
#include <fstream>
#include "Bus.h"
using namespace std;


class BinaryTree {

public:
    class Node {
    public:
        Bus* bus;
        Node* left;
        Node* right;

        Node(Bus* bus);
    };
    BinaryTree() {
        root = nullptr;
    }

    void insert(Bus* bus);

    Bus* search(int key);

    void display(Bus* bus);

    void writeToFile(const string& filename);

private:

    Node* root;
    Node* insertHelper(Node* node, Bus* bus);

    Bus* searchHelper(Node* node, int key);

    void writeToFileHelper(Node* node, ofstream& outFile);
};


#endif
