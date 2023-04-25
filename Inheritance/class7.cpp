// Inheritance - Calling Base Class Constructors // Default constructors
// with no parameters
#include <bits/stdc++.h>
using namespace std;
class Base {
    private:
        int x;
    
    public:
    Base(): x(0) { // Default constructor 
        cout<<"Base default constructor"<<endl;
    }
};
class Derived : public Base {
    private:
        int y;

    public: 
    Derived(): y(0) { //Default constructor 
        cout<<"Derived Default constructor"<<endl;
    }
    Derived(int i) { // Parameterized constructor 
        y = i;
        cout<<"Derived Parameterized constructor"<<endl;
    }

};

int main(void) {
    Base b;  /* once i got an object the compiler called the
    default constructor for the Base class*/
    Derived d;  //the compiler called the default constructor for the class Derived
    Derived d2(2);
    return 0 ;
}