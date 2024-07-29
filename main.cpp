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
        cout << "Species: " << this->species << ", Diet: " << this->diet << ", Age: " << this->age << ", Health: " << this->health << endl;
    }

    void behave() {
        cout << this->species << " is behaving according to its nature." << endl;
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
        cout << "Species: " << this->species << ", Age: " << this->age << ", Health: " << this->health << endl;
    }

    void grow() {
        cout << this->species << " is growing." << endl;
    }
};

int main() {

    Animal animals[] = {
        Animal("Deer", "Herbivore", 3, 100.0),
        Animal("Lion", "Carnivore", 5, 95.0),
        Animal("Elephant", "Herbivore", 10, 85.0)};

    for (int i = 0; i < 3; i++) {
        animals[i].displayDetails();
        animals[i].behave();
    }

    Plant plants[] = {
        Plant("Oak Tree", 10, 95.0),
        Plant("Pine Tree", 15, 90.0),
        Plant("Bush", 5, 80.0)};

    for (int i = 0; i < 3; i++) {
        plants[i].displayDetails();
        plants[i].grow();
    }

    return 0;
}
