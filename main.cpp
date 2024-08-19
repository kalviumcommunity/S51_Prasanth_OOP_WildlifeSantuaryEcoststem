#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string species;
    string diet;
    int age;
    double health;

public:
    Animal(string species, string diet, int age, double health) {
        this->species = species;
        this->diet = diet;
        this->age = age;
        this->health = health;
    }

    void displayDetails() {
        cout << "Species: " << species << ", Diet: " << diet << ", Age: " << age << ", Health: " << health << endl;
    }

    void behave() {
        cout << species << " is behaving according to its nature." << endl;
    }
};

class Plant {
private:
    string species;
    int age;
    double health;

public:
    Plant(string species, int age, double health) {
        this->species = species;
        this->age = age;
        this->health = health;
    }

    void displayDetails() {
        cout << "Species: " << species << ", Age: " << age << ", Health: " << health << endl;
    }

    void grow() {
        cout << species << " is growing." << endl;
    }
};

int main() {
    Animal* animal1 = new Animal("Deer", "Herbivore", 3, 100.0);
    Animal* animal2 = new Animal("Lion", "Carnivore", 5, 95.0);
    Animal* animal3 = new Animal("Elephant", "Herbivore", 10, 85.0);

    animal1->displayDetails();
    animal1->behave();

    animal2->displayDetails();
    animal2->behave();

    animal3->displayDetails();
    animal3->behave();

    Plant* plant1 = new Plant("Oak Tree", 10, 95.0);
    Plant* plant2 = new Plant("Pine Tree", 15, 90.0);
    Plant* plant3 = new Plant("Bush", 5, 80.0);

    plant1->displayDetails();
    plant1->grow();

    plant2->displayDetails();
    plant2->grow();

    plant3->displayDetails();
    plant3->grow();

    delete animal1;
    delete animal2;
    delete animal3;

    delete plant1;
    delete plant2;
    delete plant3;

    return 0;
}
