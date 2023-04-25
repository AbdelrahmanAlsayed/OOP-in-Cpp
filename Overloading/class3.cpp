//Operator Overloading

#include <bits/stdc++.h>
using namespace std;
class Counter
{
    private:
    unsigned int count;

    public:
        Counter () : count(0) {    // constructor
        }
        Counter (int c ) : count(c) {  //constructor
        }
        int get_count() {
            return count;
        }
        Counter operator ++ ()  { // postfix
            ++count;
            return Counter (count);  /* if the count was 5 i added 1 here so it becomes
             6 and i made a new counter and the initial value for it is 6 now */
        }
        Counter operator ++ (int) {
            count++;
            return Counter(count);
        }
        Counter operator -- () {       // to prefix
            --count;
            return Counter (count); 
        }
        Counter operator -- (int) {
            count--;
            return Counter (count); 
        }
};

int main(void) {
    Counter c1 (5);
    Counter c2 (10);
    Counter c3 = ++c1;
    Counter c4 = --c2;
    Counter c5 = c1--;
    cout<< c1.get_count()  <<endl;
    cout<< c4.get_count() <<endl;
}
