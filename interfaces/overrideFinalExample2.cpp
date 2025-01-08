// overrideFinalExample2.cpp

#include <iostream>
#include <vector>

class Animal {
public:
    virtual void sound() const {
        std::cout << "Animal sound" << std::endl;
    }
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() const override final {  // Overrides Animal::sound and locks further overrides
        std::cout << "Bark" << std::endl;
    }
};

class GermanShepherd : public Dog {
public:
    // This will cause a compilation error
    // void sound() const override { std::cout << "Loud Bark" << std::endl; }
};

int main() {
    
    std::vector<Animal*> animals;
    // animal->sound();  // Outputs: 
    animals.push_back(new Dog());
    animals.push_back(new GermanShepherd());

    //wherever possible consider use of range based loops especially with containers
    for (auto& animal : animals) {
    	animal->sound()
    }

    // for (std::vector<Animal*>::iterator i = animals.begin(); i != animals.end(); ++i)
    // {
    // 	(*i)->sound(); // iterator is a pointer, so de-reference to get value
    // }

    // Clean up
    for (auto& animal : animals) {
        delete animal;
    }
}
