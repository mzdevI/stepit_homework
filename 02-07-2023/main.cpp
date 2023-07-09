#include <iostream>

using namespace std;

template<typename T>
class BinaryTree {
    struct Node {
        T data{};
        Node* left{};
        Node* right{};

        Node(T data) : data(data) {}
    };

    Node* root{};

public:
    BinaryTree() = default;

    BinaryTree(T data) {
        this->root = new Node(data);
    }

    bool tryAdd(T data) {
        if (this->root == nullptr) {
            this->root = new Node(data);
            return true;
        }
        else {
            Node* current = this->root;
            while (true) {
                if (data < current->data) {
                    if (current->left == nullptr) {
                        current->left = new Node(data);
                        return true;
                    }
                    else {
                        current = current->left;
                    }
                }
                else if (data > current->data) {
                    if (current->right == nullptr) {
                        current->right = new Node(data);
                        return true;
                    }
                    else {
                        current = current->right;
                    }
                }
                else {
                    return false;
                }
            }
        }
    }

    bool tryDelete(T data) {
        return tryDelete(root, data);
    }

    bool tryDelete(Node*& node, T data) {
        if (node == nullptr) {
            return false;
        }
        else if (data < node->data) {
            return tryDelete(node->left, data);
        }
        else if (data > node->data) {
            return tryDelete(node->right, data);
        }
        else {
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                node = nullptr;
            }
            else if (node->left == nullptr) {
                Node* temp = node;
                node = node->right;
                delete temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node;
                node = node->left;
                delete temp;
            }
            else {
                Node* minRight = findMin(node->right);
                node->data = minRight->data;
                tryDelete(node->right, minRight->data);
            }
            return true;
        }
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    bool tryEdit(T oldData, T newData) {
        Node* node = findNode(root, oldData);
        if (node != nullptr) {
            node->data = newData;
            return true;
        }
        else {
            return false;
        }
    }

    Node* findNode(Node* node, T data) {
        if (node == nullptr || node->data == data) {
            return node;
        }
        else if (data < node->data) {
            return findNode(node->left, data);
        }
        else {
            return findNode(node->right, data);
        }
    }
};

int main() {
    BinaryTree<int> tree;
    tree.tryAdd(5);
    tree.tryAdd(3);
    tree.tryAdd(7);
    tree.tryAdd(2);
    tree.tryAdd(4);
    tree.tryAdd(6);
    tree.tryAdd(8);

    if (tree.tryDelete(4)) {
        cout << "Node with data 4 deleted successfully." << endl;
    }
    else {
        cout << "Node with data 4 not found." << endl;
    }

    if (tree.tryEdit(12, 9)) {
        cout << "Node with data 7 edited successfully." << endl;
    }
    else {
        cout << "Node with data 12 not found." << endl;
    }

    cout << endl;

    return 0;
}
