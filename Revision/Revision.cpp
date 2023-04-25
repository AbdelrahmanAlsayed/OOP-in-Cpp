#include <bits\stdc++.h>
using namespace std;
class Employee {
    protected:
        string name;
        int em_id;
        double salary;
    public:
    Employee(): name("unknown"), em_id(0), salary(0.0) {
    }
    Employee(string n, int id, double sal) : name(n), em_id(id), salary(sal) { 
    /*instructor to take the input parameter from the user and
    it's initialized list*/
    }
    virtual float get_total_salary() = 0; /* pure virtual function so this is an Abstract class and
    gonna overridden this function so must be the same signature in all sub classes*/
    virtual void print(){
        cout<<"The name is: "<<name<<" The employee id is: "<<em_id;
        cout<<" The salary is: "<<salary<<endl;
    }    
};

class Sales : public Employee {
    private:
        float gross_sales;
        float commission_rate;

    public:
    Sales(string n, int id, double sal, float gs, float cr): Employee(n, id, sal) {
        gross_sales = gs;
        commission_rate = cr;
    }
    float get_total_salary() {
        return salary + (gross_sales * commission_rate);
    }
    void print() {
        Employee::print(); // calling this method from the base
        cout<<"Gross sales = "<<gross_sales<<" and the commission rate = "<<commission_rate<<endl;
    }
};

class Engineer : public Employee {
    private:
        string specialty;
        int experience;
        int overtime_hours;
        float overtime_hour_rate;

    public:
        Engineer(string n, int id, double sal, string sp, int ex, int oh, float ohr):
            Employee(n, id, sal) {
            specialty = sp;
            experience = ex;
            overtime_hours = oh;
            overtime_hour_rate = ohr;
        }
        float get_total_salary() {
            return salary + (overtime_hours * overtime_hour_rate);
        }
    void print() {
        cout<<"*******************************************************"<<endl;
        Employee::print();
        cout<<"specialty is "<<specialty<<" and experience is "<<experience<<endl;
    }

};

int main(void) {
    Employee * emptr;
    Sales s("Ahmed", 1135, 8000.0 , 50000, .10);
    Engineer e("Abdelrahman", 1250, 12000, "Back-End Developer", 3, 22, 70);
    
    emptr = & s; // we used pointers here just to revision on polymorphism
    emptr ->get_total_salary();
    emptr ->print();

    emptr = & e;
    emptr ->get_total_salary();
    emptr ->print();
}
