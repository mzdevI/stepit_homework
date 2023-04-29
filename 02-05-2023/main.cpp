#include <iostream>
using namespace std;

struct Animal{
    char* name = new char[20]{};
    uint16_t age{};
    char* gender = new char[20]{};
};

struct Zoo{
    char* name = new char[20]{};
    unsigned int capacity{10};
    unsigned int animalCount{};
    Animal* animals{};

    void addAnimal() {
        if (animalCount < capacity){
            Animal *animal = new Animal{};

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter animal name: ";
            cin.ignore();

            cout << "Enter animal age: ";
            cin >> animal->age;
            cin.ignore();

            cout << "Enter animal gender: ";
            cin.getline(animal->gender, sizeof(animal->gender));
            animal[animalCount] = *animal;
            animalCount++;
        }
    }
};


void createZoo(Zoo *&zoo) {
    zoo = new Zoo{};
    cout << "Enter zoo name: ";
    cin.getline(zoo->name, 20);

    cout << "Enter zoo capacity";
    cin >> zoo->capacity;
    getchar();
}

void addAnimal(char name[], int &age, char gender[]) {
}

void removeAnimal(){
}

int main() {
    int choice{};
    Zoo *zoo{};
    createZoo(zoo);


    while (true) {
        cout << "Enter choice: " << endl
             << "0 - Exit" << endl
             << "1 - Add animal" << endl
             << "2 - Remove animal" << endl
             << "3 - Edit specific animal" << endl
             << "4 - Show all animals" << endl;
        cin >> choice;

        if (choice == 0)
            break;

        switch (choice) {
            case 1:
        }

    }
    return 0;
}
