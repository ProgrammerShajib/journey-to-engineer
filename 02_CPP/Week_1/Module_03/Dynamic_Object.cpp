#include<bits/stdc++.h>
using namespace std;

class Student{

    public: // access modifier 
        int roll, cls;
        double cgp;

    Student(int roll, int cls, double cgp){  // Here Student is the constractor and it has no return type also it need to be named same as class
    
        this->roll = roll;
        this->cls = cls;
        this->cgp = cgp;
    }

    
};
 

int main(){

    Student karim(3, 4, 5.5);

    Student* p = new Student(4,5,6.987); // creating Dynamic object and store it's first memory location in the pointer.

    cout << karim.roll << " "<< karim.cls << " "  << karim.cgp << endl;
    cout << (*p).roll << " "<< p->cls << " "  << p->cgp;
    
    return 0;
}