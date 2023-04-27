#include <iostream>
using namespace std;


struct Book {
    char title[50]{};
    char author[50]{};
    char genre[20]{};
    char publisher[50]{};
};

void editBooks(Book books[], const int index) {
    cout << "Enter title: ";
    cin.getline(books[index].title, 50);

    cout << "Enter author: ";
    cin.getline(books[index].author, 50);

    cout << "Enter genre: ";
    cin.getline(books[index].genre, 20);

    cout << "Enter publisher: ";
    cin.getline(books[index].publisher, 50);
}


void printBooks(Book book[], const int bookSize) {
    for (int i{}; i < bookSize; i++) {
        cout << "Book " << i << endl;
        cout << "Title: " << book[i].title << endl;
        cout << "Author: " << book[i].author << endl;
        cout << "Genre: " << book[i].genre << endl;
        cout << "Publisher: " << book[i].publisher << endl;
    }
}

void filterBookByAuthor(Book books[], const int bookSize, const char author[]) {
    for (int i{}; i < bookSize; i++) {
        if (strcmp(books[i].author, author) == 0) {
            cout << "Book " << i << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Genre: " << books[i].genre << endl;
            cout << "Publisher: " << books[i].publisher << endl;
        }
    }
}

void filterBookByTitle(Book books[], const int bookSize, const char title[]) {
    for (int i{}; i < bookSize; i++) {
        if (strcmp(books[i].title, title) == 0) {
            cout << "Book " << i << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Genre: " << books[i].genre << endl;
            cout << "Publisher: " << books[i].publisher << endl;
        }
    }
}

// Selection sort: https://www.geeksforgeeks.org/selection-sort/
void sortBookByName(Book books[], const int bookSize) {
    for (int i{}; i < bookSize; i++) {
        for (int j{}; j < bookSize; j++) {
            if (strcmp(books[i].title, books[j].title) < 0) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortBookByAuthor(Book books[], const int bookSize) {
    for (int i{}; i < bookSize; i++) {
        for (int j{}; j < bookSize; j++) {
            if (strcmp(books[i].author, books[j].author) < 0) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortBookByPublisher(Book books[], const int bookSize) {
    for (int i{}; i < bookSize; i++) {
        for (int j{}; j < bookSize; j++) {
            if (strcmp(books[i].publisher, books[j].publisher) < 0) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}


int main() {

    int bookSize = 10;
    Book books[bookSize];

    books[0] = {"Book0", "Author0", "Genre0", "Publisher0"};
    books[1] = {"Book1", "Author1", "Genre1", "Publisher1"};
    books[2] = {"Book2", "Author2", "Genre2", "Publisher2"};
    books[3] = {"Book3", "Author3", "Genre3", "Publisher3"};
    books[4] = {"Book4", "Author4", "Genre4", "Publisher4"};
    books[5] = {"Book5", "Author5", "Genre5", "Publisher5"};
    books[6] = {"Book6", "Author6", "Genre6", "Publisher6"};
    books[7] = {"Book7", "Author7", "Genre7", "Publisher7"};
    books[8] = {"Book8", "Author8", "Genre8", "Publisher8"};
    books[9] = {"Book9", "Author9", "Genre9", "Publisher9"};

    return 0;
}