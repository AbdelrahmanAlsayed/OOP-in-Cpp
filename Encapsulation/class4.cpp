// c++ program to explain
// Encapsulation
#include<iostream>
using namespace std;

class Encapsulation {
    private:
        // data hidden from outside world
        int x;

    public:
        // function to set value of variable x
        int set(int a)  {
            x =a;
            return x;
        }
        
        // function to return value of  variable x
        int get()
        {
            return x;
        }
    };

// main function
int main(void) {
    Encapsulation obj;
    cout<<obj.set(22);
}
