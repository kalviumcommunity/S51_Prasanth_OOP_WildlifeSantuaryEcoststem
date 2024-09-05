#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;
    string type;

public:
    Animal(string n, int a, string t) : name(n), age(a), type(t) {}

    string getName() const {
        return name;
    }

    void setName(string newName) {
        name = newName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        }
    }

    void displayDetails() const {
        cout << "Animal: " << name << ", Age: " << age << ", Type: " << type << endl;
    }
};

class Plant {
private:
    string species;
    double height;

public:
    Plant(string s, double h) : species(s), height(h) {}

    string getSpecies() const {
        return species;
    }

    void setSpecies(string newSpecies) {
        species = newSpecies;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double newHeight) {
        if (newHeight > 0) {
            height = newHeight;
        }
    }

    void displayDetails() const {
        cout << "Plant: " << species << ", Height: " << height << " meters" << endl;
    }
};

int main() {
    Animal lion("Lion", 5, "Carnivore");
    lion.displayDetails();

    lion.setAge(6);
    lion.displayDetails();

    Plant oakTree("Oak Tree", 15.0);
    oakTree.displayDetails();

    oakTree.setHeight(16.0);
    oakTree.displayDetails();

    return 0;
}
