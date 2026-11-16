#include<bits/stdc++.h>
using namespace std;
class Student{

    public:
        char name[30];
        int roll;
        char section;
        double math_marks;
        int cls;

    Student(char name[], int roll, char section, double math_marks, int cls){
        strcpy(this->name , name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
        
    }
};
int main(){

    Student Karim("karim Vai", 3, 'A', 3.6, 5);
    Student Rahim("Rahim", 3, 'A', 3.9, 5);
    Student Safin("Safin", 3, 'A', 3.88, 5);

    // cout << Karim.name << " " << Karim.roll << " " << Karim.section << " " << Karim.math_marks << " " << Karim.cls;

    if(Karim.math_marks > Rahim.math_marks && Karim.math_marks > Safin.math_marks){
        cout << "Karim Has the highest math marks";
    }else if(Rahim.math_marks > Karim.math_marks && Rahim.math_marks> Safin.math_marks){
        
        cout << "Rahim Has the highest math marks";
    }else{
        
        cout << "Safin Has the highest math marks";
    }

    
    return 0;
}