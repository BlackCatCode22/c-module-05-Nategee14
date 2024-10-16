// Nate 9-25-24
// firstZooProgram


#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

class Animal {
public:
    //Create constrcutors for our class.
    Animal(string aName){
        this->name = aName;
        origin = "some Place";
    }

    Animal(){
        age = 0;
        sex = "unknown";
        weight = "0 pounds";
        birthDate = 0;
        color = "unknown";
        name = "TBA";
        origin = "somewhere";
    }

    int age;
    string sex;
    string weight;
    int birthDate;
    string color;
    string origin;
    string name;
};

class Hyena : public Animal {
    // Create a constructor that uses the super class constructor.
    public: 
    Hyena(string someName) : Animal(someName) {

    }

    Hyena() : Animal () {

    }
};

int main (){
    cout << "\nWelcome to my Zoo Program!" << endl;

    // Create a NEW animal object.
    // The new keyword allocates memory on the heap and returns the address of the object.
    Animal* myAnimal = new Animal();

    // Create another animal without using a pointer and new.
    Animal anotherAnimal;

    myAnimal->age = 10;
    myAnimal->color = "red";
    myAnimal->name = "Bob";
    myAnimal->sex = "male";
    myAnimal->weight = "20 pounds";
    myAnimal->birthDate = 2021;

    cout << "This is my animal object: " << endl;
    cout << "Name: " << myAnimal->name << "\nAge: " << myAnimal->age << "\nSex: " << myAnimal->sex << "\nBirth Date: " << myAnimal->birthDate 
    << "\nWeight: " << myAnimal->weight << "\nColor: " << myAnimal->color << endl;

    anotherAnimal.age = 20;
    anotherAnimal.color = "blue";
    anotherAnimal.birthDate = 1987;
    cout << "\nThis is another animal:" << endl;
    cout << "age: " << anotherAnimal.age << "\nColor: " << anotherAnimal.color << "\nBirth Date: " << anotherAnimal.birthDate << endl;

    // Create an animal with a name.
    Animal* animalWithAName = new Animal("Leo");
    cout << "\nThis is an animal with a name:";
    cout << "\n" << "name: " << animalWithAName->name << endl;

    // Create an animal with the default constructor.
    Animal* animalDefaultConstruct = new Animal();
    cout << "\nThis is an animal with a default constructor: " << endl;
    cout << "age: " << animalDefaultConstruct->age << "\nSex: " << animalDefaultConstruct->sex << "\nName: " << animalDefaultConstruct->name << endl;

    //Create a hyena.
    Hyena* hyena = new Hyena ("Zig");
    cout << "\nThis is my Hyena: " << endl;
    cout << "Origin: " << hyena->origin << "\nName:" << hyena->name << endl;

    Hyena* hyena2 = new Hyena();
    cout << "\nThis is a new and different Hyena: " << endl;
    cout << "Name: " << hyena2->name << endl;
    return 0;
}