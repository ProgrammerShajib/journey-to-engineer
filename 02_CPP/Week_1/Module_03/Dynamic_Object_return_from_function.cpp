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

Student* fun(){
    
    Student* p = new Student(4,5,6.9);
    return p;

}

int main(){

    Student* p = fun();

    cout << p->roll << " "<< p->cls << " "  << p->cgp;
    
    return 0;
}