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
    // Constructor
    Animal(string species, string diet, int age, double health) {
        this->species = species;
        this->diet = diet;
        this->age = age;
        this->health = health;
    }

    // Member function to display animal details
    void displayDetails() {
        cout << "Species: " << this->species << ", Diet: " << this->diet << ", Age: " << this->age << ", Health: " << this->health << endl;
    }

    // Member function to simulate animal behavior
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
    // Constructor
    Plant(string species, int age, double health) {
        this->species = species;
        this->age = age;
        this->health = health;
    }

    // Member function to display plant details
    void displayDetails() {
        cout << "Species: " << this->species << ", Age: " << this->age << ", Health: " << this->health << endl;
    }

    // Member function to simulate plant growth
    void grow() {
        cout << this->species << " is growing." << endl;
    }
};

int main() {
    // Creating objects for Animal and Plant
    Animal deer("Deer", "Herbivore", 3, 100.0);
    deer.displayDetails();
    deer.behave();

    Plant oakTree("Oak Tree", 10, 95.0);
    oakTree.displayDetails();
    oakTree.grow();

    return 0;
}
