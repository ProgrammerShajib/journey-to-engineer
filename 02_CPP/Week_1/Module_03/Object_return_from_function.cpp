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

Student fun(){
    Student karim(1, 5, 3.44);
    return karim;

}

int main(){

    Student obj = fun();

    cout << obj.roll << " "<< obj.cls << " "  << obj.cgp;
    
    return 0;
}