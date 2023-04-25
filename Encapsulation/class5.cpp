#include <bits/stdc++.h>
using namespace std;
class Person {
    private:
        string name;
        string gender;
        float age;

    public:
        Person() {
            name = "UNKNOWN";
            gender = "UNKNOWN";
            age = 0;
        }
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

};

int main(void) {
    Person p1;
    p1.set_name("Abdelrahman Alsayed");
    p1.set_age(22);
    p1.set_gender("male");
    cout << p1.get_name() << "\n";
    cout<< p1.get_age()<< "\n";
    cout<< p1.get_gender();
    
} 