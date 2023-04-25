//24 - C++ - Exception Handling In C++
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x, y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    
    try {
    if(y == 0 )
        throw "Y is a zero, Don't do it again bro"; /* el catch el mafrod ykon mohaya2 ystaqbel exception
        mn el no3 ely fe el throw*/
    if(x < y)
        throw x;
    else    
    cout<<"The division of the two numbers are: "<< x / y <<endl;
    }

    catch(const char* e) { // ba2olo hena enta haygeelk exception and give it any name like any variable
        cout<<e<<endl; /* what is the virtual function that declares the error message
        of the exception -- e.what(); */
        cout<<"Unhandled exception, Review your input"<<endl;
    }
    catch(int e) {
        cout<<"number 2 is bigger than number 1 bro WTF"<<endl;
    }
    cout<<"The program continued"<<endl;
    cout<<"The sum of the two numbers are: "<< x + y <<endl;
}
