#include <iostream>
#include <string>
using namespace std;

class LivingBeing {
protected:
    string name;

public:
    LivingBeing(string n = "Unknown") : name(n) {}
    virtual void displayInfo() const = 0;  // Pure virtual function
};

class Animal : public LivingBeing {
public:
    Animal(string n = "Unknown") : LivingBeing(n) {}
    
    void displayInfo() const override {
        cout << "Animal: " << name << endl;
    }
};

class Plant : public LivingBeing {
public:
    Plant(string n = "Unknown") : LivingBeing(n) {}
    
    void displayInfo() const override {
        cout << "Plant: " << name << endl;
    }
};

int main() {
    LivingBeing* being1 = new Animal("Tiger");
    LivingBeing* being2 = new Plant("Fern");

    being1->displayInfo();  // Calls Animal's displayInfo
    being2->displayInfo();  // Calls Plant's displayInfo

    delete being1;
    delete being2;

    return 0;
}