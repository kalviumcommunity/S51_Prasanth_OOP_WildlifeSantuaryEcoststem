#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    void displayAnimalInfo() const
    {
        cout << "Animal: " << name << ", Age: " << age << endl;
    }

    void growOlder()
    {
        age += 1;
        cout << name << " is now older, age: " << age << endl;
    }

private:
    void ageIncrement()
    {
        age++;
    }
};

class Plant
{
private:
    string species;
    double height;

public:
    Plant(string s, double h) : species(s), height(h) {}

    void displayPlantInfo() const
    {
        cout << "Plant: " << species << ", Height: " << height << " meters" << endl;
    }

    void grow(double additionalHeight)
    {
        height += additionalHeight;
        cout << species << " has grown to " << height << " meters." << endl;
    }

private:
    void increaseHeight(double h)
    {
        height += h;
    }
};

int main()
{
    Animal tiger("Tiger", 4);
    tiger.displayAnimalInfo();
    tiger.growOlder();

    Plant fern("Fern", 0.5);
    fern.displayPlantInfo();
    fern.grow(0.3);

    return 0;
}
