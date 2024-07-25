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
    Animal(string sp, string dt, int ag, double hl) : species(sp), diet(dt), age(ag), health(hl) {};

    void displayDetails() {
        cout<<"Species: "<< species <<" Diet: "<< diet <<" Age: "<< age <<" Health: "<< health << endl; 
    }

    void behave() {
        cout<<species<<" is behaving according to its nature."<< endl;
    }
};

class Plant {
    private:
    string species;
    int age;
    int health;

    public:
    Plant(string sp, int ag, int hl) : species(sp), age(ag), health(hl) {};

    void displayDetails() {
        cout<<"Species: "<< species <<" Age: "<< age <<" Health: "<< health << endl;
    }

    void grow() {
        cout<<species<<" is growing according to its nature."<< endl;
    }

};


int main(){
    Animal deer("Deer", "Herbivore", 3, 100.0);
    deer.displayDetails();
    deer.behave();

    Plant oakTree("Oak Tree", 10, 95.0);
    oakTree.displayDetails();
    oakTree.grow();

    return 0;
}