#include <iostream>
#include <string>
using namespace std;

// Base class: LivingBeing
class LivingBeing {
protected:
    string name;
    int age;

public:
    LivingBeing(string n = "Unknown", int a = 0) : name(n), age(a) {
        cout << "LivingBeing constructor called" << endl;
    }

    virtual void displayInfo() const {
        cout << "LivingBeing: " << name << ", Age: " << age << endl;
    }

    virtual ~LivingBeing() {
        cout << "LivingBeing destructor called for: " << name << endl;
    }
};

// Derived class: Animal (Single Inheritance)
class Animal : public LivingBeing {
public:
    Animal(string n = "Unknown", int a = 0) : LivingBeing(n, a) {
        cout << "Animal constructor called" << endl;
    }

    void displayInfo() const override {
        cout << "Animal: " << name << ", Age: " << age << endl;
    }

    ~Animal() {
        cout << "Animal destructor called for: " << name << endl;
    }
};

// Derived class: Plant (Single Inheritance)
class Plant : public LivingBeing {
private:
    double height;

public:
    Plant(string s = "Unknown", double h = 0.0) : LivingBeing(s), height(h) {
        cout << "Plant constructor called" << endl;
    }

    void displayInfo() const override {
        cout << "Plant: " << name << ", Height: " << height << " meters" << endl;
    }

    ~Plant() {
        cout << "Plant destructor called for: " << name << endl;
    }
};

// Multi-level Inheritance: CarnivorousPlant derived from Plant
class CarnivorousPlant : public Plant {
private:
    string type;

public:
    CarnivorousPlant(string s, double h, string t) : Plant(s, h), type(t) {
        cout << "CarnivorousPlant constructor called" << endl;
    }

    void displayInfo() const override {
        Plant::displayInfo();
        cout << "Type: " << type << endl;
    }

    ~CarnivorousPlant() {
        cout << "CarnivorousPlant destructor called for: " << name << endl;
    }
};

int main() {
    Animal animal("Lion", 5);
    animal.displayInfo();

    Plant plant("Rose", 0.5);
    plant.displayInfo();

    CarnivorousPlant venusFlyTrap("Venus Flytrap", 0.3, "Carnivorous");
    venusFlyTrap.displayInfo();

    return 0;
}