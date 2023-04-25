//Passing Objects as Arguments to Methods
#include <bits/stdc++.h>
using namespace std;
class Distance
{
    private:
        int feet;
        float inches;

    public:
    Distance () : feet(0), inches (0)
    {
    }
    Distance (int ft, float in) : feet(ft), inches(in)
    {
    }
    Distance add_distance (Distance d1)
    {
        Distance result;
        result.feet = feet + d1.feet;
        result.inches = inches + d1.inches;
        return result;
    }
    void print()
    {
        cout<<"Feet = "<<feet <<"\t"<<"÷nches = "<< inches<<endl;
    }    
};
int main(void)
{
    Distance d1(5, 3.5);
    Distance d2(7, 4.25);
    Distance d3 = d1.add_distance(d2); // جمعهم
    d3.print();

}