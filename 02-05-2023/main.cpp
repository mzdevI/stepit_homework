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
    Animal* animals = new Animal[animalCount]{};

    void addAnimal(Animal animal) {
        if (animalCount < capacity){
            auto* newAnimal = new Animal[animalCount]{};
            for (int i = 0; i < animalCount; ++i) {
                newAnimal[i] = animals[i];
            }
            newAnimal[animalCount] = animal;
            delete[] animals;
            animals = newAnimal;
            animalCount++;
        }
        else {
            cout << "Error, Zoo capacity reached.";
        }
    }

    void removeAnimal(int index) {
        auto* newAnimal = new Animal[animalCount-1]{};
        for (int i = 0; i < animalCount; ++i) {
            newAnimal[i] = animals[i];
        }
        for (int i = index; i < animalCount-1; ++i) {
            newAnimal[i] = animals[i+1];
        }
        delete[] animals;
        animals = newAnimal;
        animalCount--;
    }

    void editAnimal(int index, Animal animal) {
        animals[index] = animal;
    }

    void printAnimals() const {
        cout << "Name:\tAge:\tGender:" << endl;
        for (int i = 0; i < animalCount; ++i) {
            cout << animals[i].name << "\t" << animals[i].age << "\t" << animals[i].gender << endl;
        }
    }

};


int main() {
    Zoo zoo;
    strcpy(zoo.name, "Zoo");
    zoo.capacity = 10;
    zoo.animalCount = 0;

    zoo.addAnimal({"Cow", 5, "Female"});
    zoo.addAnimal({"Dog", 3, "Male"});
    zoo.editAnimal(0, {"Cow", 3, "Female"});
    zoo.printAnimals();

    cout << "\tAfter removing:" << endl;
    zoo.removeAnimal(0);
    zoo.printAnimals();


    return 0;
}
