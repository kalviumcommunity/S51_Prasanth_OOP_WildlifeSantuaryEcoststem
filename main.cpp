#include <iostream>
#include <string>
using namespace std;

// Base class: LivingBeing
class LivingBeing {
protected:
    string name;
    int age;

public:
    // Constructor overloading to demonstrate compile-time polymorphism
    LivingBeing(string n = "Unknown", int a = 0) : name(n), age(a) {
        cout << "LivingBeing constructor called" << endl;
    }

    // Virtual function for runtime polymorphism
    virtual void displayInfo() const {
        cout << "LivingBeing: " << name << ", Age: " << age << endl;
    }

    virtual ~LivingBeing() {
        cout << "LivingBeing destructor called for: " << name << endl;
    }
};

// Derived class: Animal (Single Inheritance and Run-time Polymorphism)
class Animal : public LivingBeing {
public:
    Animal(string n = "Unknown", int a = 0) : LivingBeing(n, a) {
        cout << "Animal constructor called" << endl;
    }

    // Overriding base class function (Run-time polymorphism)
    void displayInfo() const override {
        cout << "Animal: " << name << ", Age: " << age << endl;
    }

    ~Animal() {
        cout << "Animal destructor called for: " << name << endl;
    }
};

// Derived class: Plant (Single Inheritance and Run-time Polymorphism)
class Plant : public LivingBeing {
private:
    double height;

public:
    // Constructor overloading for compile-time polymorphism
    Plant(string s = "Unknown", double h = 0.0) : LivingBeing(s), height(h) {
        cout << "Plant constructor called" << endl;
    }

    // Overriding base class function (Run-time polymorphism)
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

    // Overriding the displayInfo method to showcase run-time polymorphism
    void displayInfo() const override {
        Plant::displayInfo();
        cout << "Type: " << type << endl;
    }

    ~CarnivorousPlant() {
        cout << "CarnivorousPlant destructor called for: " << name << endl;
    }
};

// Function overloading (Compile-time polymorphism)
void displayLivingBeingInfo(const LivingBeing& being) {
    being.displayInfo();
}

void displayLivingBeingInfo(const LivingBeing& being, const string& extraInfo) {
    being.displayInfo();
    cout << "Extra Info: " << extraInfo << endl;
}

int main() {
    // Demonstrating compile-time polymorphism with constructor overloading
    LivingBeing being1("Generic", 100);
    LivingBeing being2;

    // Demonstrating run-time polymorphism with virtual functions
    Animal animal("Lion", 5);
    Plant plant("Rose", 0.5);
    CarnivorousPlant venusFlyTrap("Venus Flytrap", 0.3, "Carnivorous");

    // Using virtual function to showcase runtime polymorphism
    LivingBeing* ptr;

    ptr = &animal;
    ptr->displayInfo();

    ptr = &plant;
    ptr->displayInfo();

    ptr = &venusFlyTrap;
    ptr->displayInfo();

    // Demonstrating function overloading (Compile-time polymorphism)
    displayLivingBeingInfo(plant);
    displayLivingBeingInfo(animal, "King of the Jungle");

    return 0;
}