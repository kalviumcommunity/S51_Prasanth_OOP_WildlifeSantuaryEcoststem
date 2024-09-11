#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    Animal() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }

    Animal(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called" << endl;
    }

    Animal(const Animal &obj) {
        name = obj.name;
        age = obj.age;
        cout << "Copy constructor called" << endl;
    }

    ~Animal() {
        cout << "Destructor called for Animal: " << name << endl;
    }

    void displayAnimalInfo() const {
        cout << "Animal: " << name << ", Age: " << age << endl;
    }
};

class Plant {
private:
    string species;
    double height;

public:
    Plant() : species("Unknown"), height(0.0) {
        cout << "Default constructor called for Plant" << endl;
    }

    Plant(string s, double h) : species(s), height(h) {
        cout << "Parameterized constructor called for Plant" << endl;
    }

    ~Plant() {
        cout << "Destructor called for Plant: " << species << endl;
    }

    void displayPlantInfo() const {
        cout << "Plant: " << species << ", Height: " << height << " meters" << endl;
    }
};

int main() {
    Animal animal1;
    animal1.displayAnimalInfo();

    Animal animal2("Lion", 5);
    animal2.displayAnimalInfo();

    Animal animal3 = animal2;
    animal3.displayAnimalInfo();

    Plant plant1("Rose", 0.5);
    plant1.displayPlantInfo();

    return 0;
}
