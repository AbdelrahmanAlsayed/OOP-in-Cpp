// The default copy constructor
#include <bits/stdc++.h>
using namespace std;
class Distance {
    private:
        int feet;
        float inches;

    public:
        Distance () : feet(0), inches (0) {
        }
        Distance (int ft, float in) : feet(ft), inches(in) {
        }
        void setDistance (int ft , float in) {
            feet = ft;
            inches = in;
        }
        void print() {
            cout<<"Feet = "<<feet <<"   "<<"inches = "<<inches<<endl;
        }
};

int main(void) {
    Distance d1;
    Distance d2(11, 5.5);
    Distance d3(d2);
    d3.print();
    Distance d4(5, 5.5);
    d4.setDistance(6, 6.5);
    d4.print();
}