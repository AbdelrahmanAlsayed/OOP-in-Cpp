/* Static Class Members - cannot call member function 'int Calculator::divide(int, int)
' without object - so it's better to make it Static to avoid creating a lot of objects*/
#include <bits/stdc++.h>
using namespace std;
class Calculator {
        public:
        static int add(int num1, int num2) {
            return num1 + num2;
        }
        static int multiply(int num1, int num2) {
            return num1 * num2;
        }
        static int subtract(int num1, int num2) {
            return num1 - num2;
        }
        static int divide(int num1, int num2) {
            return num1 / num2;
        }
        // @brief 
        Calculator();
        ~Calculator();
};

int main(void)
{
    cout<<Calculator::add(50,10)<<endl;  
    cout<<Calculator::divide(60,4)<<endl;
    cout<<Calculator::multiply(3,5)<<endl;
    cout<<Calculator::subtract(20,5)<<endl;
}