// Friend Class
#include <bits/stdc++.h>
using namespace std;
class Person {
    private:
        string name;
        string gender;
        float age;

    public:
        /*Person()
        {
            name = "UNKNOWN";
            gender = "UNKNOWN";
            age = 0;
        }*/
        Person(string n, string g, float a) {
            name = n;
            gender = g;
            age = a;
        }
        void set_age(float a) {
            age = a;
        }
        float get_age() {
            return age;
        }
        void set_name (string n) {
            name = n;
        }
        string get_name() {
            return name;
        }
        void set_gender(string g) {
            gender = g;
        }
        string get_gender() {
            return gender;
        }
        friend class printClass;
};

class printClass {  // friend class
    public:
    void print(Person pp)  {
    cout<<"The basic data of person"<<endl;
    cout<<"*************************\n";
    cout<<"The name is: "<<pp.name<<endl;    // name private and i accessed it by friend function
    cout<<"The gender is: "<<pp.gender<<endl;
    cout<<"The age is: "<<pp.age<<endl;
    }
};

int main(void) {
    Person pp("Abdelrahman Alsayed", "Male", 22);
    printClass pc;
    pc.print(pp);
} 