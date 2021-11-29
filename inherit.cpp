#include <iostream>
using namespace std;
// C++ program to demonstrate inheritance
// base class
class Animal {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};
class Cat : public Animal {
 
   public:
    void miau() {
        cout << "I can \"jama\"! Miau Miau!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    Cat cat1;
    cat1.eat();
    cat1.sleep();
    cat1.miau();
    
    return 0;
}
