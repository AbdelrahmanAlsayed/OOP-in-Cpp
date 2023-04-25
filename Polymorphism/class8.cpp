//20- C++ - OOP - Polymorphism and virtual Functions
#include <bits\stdc++.h>
using namespace std;
class Shape { // i made it abstract class and i can't take object 
    private:
        string color; // one attribute and three methods
    public:
        Shape(string c) {
            color = c;
        }
        virtual int area() = 0; // Here i made pure virtual function
        /* virtual means is this methods will be overridden
        in the derived classes-- if i deleted virtual the compiler will call the area and draw
        of the base class and neglect the circle and rectangle object */
        /*{
          //  cout<<"Parent class area: "<<endl;
           // return 0;
        } */
        virtual void draw() = 0;
        /*{
            cout<<"Draw parent shape in "<<color<<" color"<<endl;
        } */
        virtual void erase() = 0;
        /*{
            cout<<"Erase the parent shape"<<endl;
        }*/
        virtual void display() final
        {
            cout<<"A7a"<<endl;
        }

};
class Rectangle : public Shape {// Rectangle class is inheritance from the class shape

    private:
        int length;
        int width;

    public:
        Rectangle(int l, int w, string c) : Shape(c) {
            length = l;
            width = w;
        }
        int area()  { // i made override for the methods that i took from the base class 
            cout<<"Rectangle class area is:"<<(length*width)<<endl;
            return (length*width);
        }
        void draw() {
            cout<<"Draw rectangle"<<endl;
        }
        void erase() {
            cout<<"The rectangle reased \n";
        }
        /*void display() // it's wrong because final Classifier/ we cannot override it   
        {
            cout<<"A7a"<<endl;
        }*/
};
class Circle : public Shape {
    private:
        int radius;

    public:
        Circle(int r, string c) : Shape(c) {
            radius = r;
        }
        int area() { // i made an override for the methods that i took from the base class
            cout<<"Circle area is "<< 3.14 * ( radius * radius) <<endl;
            return  3.14 * ( radius * radius);
        }
        void draw() {
            cout<<"Draw circle "<<endl;
        }
        void erase()  {
            cout<<"The circle erased"<<endl;
        }
};

int main(void) {

    Shape* shape_pointer;
    Rectangle rec(10, 7, " black");
    Circle c (5, "White");

    shape_pointer = &rec;    // here the pointer is refer to the object rec
    shape_pointer->area();      //Here i'm calling the method area with pointer

    shape_pointer->draw();  // when we use pointer we use -> instead of "dot/. "
    
    shape_pointer = &c;
    shape_pointer->area();
    shape_pointer->draw();

}