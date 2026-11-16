#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int rool;
        int math;
        int english;
    Student(string name, int rool , int math, int english){

        this->name = name;
        this->rool = rool;
        this->math = math;
        this->english = english;
    }

    void Hello(){
        cout << "Hello I am " << name << " My total marks = " << math+english << endl;
    }

};


int main(){

    // string s;
    // getline(cin, s);

    Student Sajib("Sajib barua", 1, 80, 98);
    Sajib.Hello();
    Student songket("Songket barua", 1, 86, 98);
    songket.Hello();
    // cout << s;

    return 0;
}