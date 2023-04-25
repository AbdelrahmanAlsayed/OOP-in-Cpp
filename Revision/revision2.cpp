// overall i made four public functions
#include <bits/stdc++.h>
using namespace std;
class Rectangle {
    private:
        float length; /* for this attribute i made two public functions/ methods
        one of them to modify his value and the other to read his value */
        float width;

    public:
        void setLength (float l) { 
            if(l >=0)
            length = l;
            else
            cout<<"Error, please enter positive values: \n";
        }

        float getLength() {
            return length;
        }

        void setWidth (float w) {
            if(w >=0)
            width = w;
            else
            cout<<"Error, please enter positive values: \n";
        }

        float getWidth() {
            return width;
        }

        float getArea() {
            return length * width;
        }    
        //Rectangle() : length(2) , width(3)
        //{
          //  cout<<"A7a\n";

        //}
};


int main(void) {
    Rectangle rectangle1;
    rectangle1.setLength(5);
    rectangle1.setWidth(2);
    cout <<"The area of the rectangle is : "<< rectangle1.getArea()<<endl;
    cout <<"The length of the rectangle is : "<< rectangle1.getLength()<<endl;

}