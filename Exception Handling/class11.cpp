//24 - C++ - Exception Handling In C++
// General catch block for all kind of problems catch(...)

#include <bits\stdc++.h>
using namespace std;
int main(void) {
    double age;
    cout<<"How old are you ?"<<endl;
    cin>>age;
    try {
        if(age >= 18.0 && age < 60)
            cout<<"Access granted - you are old enough.";
        else
            throw(age);
    }
    /*catch(int a) // Ba2ol ly el catch haygee object no3o eh
    {
        cout<<"Access denied - You must be at least 18 years old.\n";
        cout<<"Age is: "<< a;
    }*/
    catch(...)  {
        cout<<"An exception Caught - you are NOT old enough GO to sleep"<<endl;
    }
}