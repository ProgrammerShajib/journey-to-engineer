#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int rool;
        int cls;
        double cgp;

    Student(int rool, int cls, double cgp){

        // rool = r;
        // cls = c;
        // cgp = g;

        // this->rool = rool;
        // this->cls= cls;
        // this->cgp = cgp;

        (*this).rool = rool;
        (*this).cls = cls;
        (*this).cgp = cgp;
    }
};

int main(){
    
    // Student mahi;
    // cin >> mahi.rool >> mahi.cls >> mahi.cgp;
    // mahi.rool =1;
    // mahi.cls =7;
    // mahi.cgp = 3.5;


    int a , b;
    double c;
    cin >>  a >>   b>>   c;
    Student mahi(a, b, c);
    Student tahi(6, 7, 4.6);
    cout << mahi.rool << " " << mahi.cls<< " " << mahi.cgp << endl;
    cout << tahi.rool << " " << tahi.cls<< " " << tahi.cgp;
    
    return 0;
}