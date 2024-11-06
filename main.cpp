#include <iostream>
#include <string>
using namespace std;

class LivingBeing {
protected:
    string name;

public:
    LivingBeing(string n = "Unknown") : name(n) {}
    virtual void displayInfo() const = 0;
    virtual ~LivingBeing() = default;
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

class Bird : public LivingBeing {
public:
    Bird(string n = "Unknown") : LivingBeing(n) {}

    void displayInfo() const override {
        cout << "Bird: " << name << endl;
    }
};

int main() {
    LivingBeing* beings[] = {
        new Animal("Tiger"),
        new Plant("Fern"),
        new Bird("Eagle")
    };

    for (int i = 0; i < 3; ++i) {
        beings[i]->displayInfo();
    }

    for (int i = 0; i < 3; ++i) {
        delete beings[i];
    }

    return 0;
}