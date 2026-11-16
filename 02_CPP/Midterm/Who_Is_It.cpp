#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int id, marks;
    char section;
    char name[100];

    Student(int id, char name[], char section, int marks)
    {

        this->id = id;
        // this->name = name;
        strcpy(this->name, name);
        this->section = section;
        this->marks = marks;
    }
};

Student *fun(int n)
{

    Student* students[3];
    for (int i = 0; i < 3; i++)
    {
        int id, marks;
        char name[30];
        char section;

        cin >> id;
        cin >> name;
        cin >> section;
        cin >> marks;

        Student s(id, name, section, marks);

        students[i] = new Student(id, name, section, marks);

        // cout << students[i]->id << " " << students[i]->name << " " << students[i]->section << " " << students[i]->marks << endl;
    }

    Student* topStudent = students[0];

    for (int i = 1; i < n; i++)
    {

        if (topStudent->marks < students[i]->marks)
        {
            topStudent = students[i];
        }
        else if (topStudent->marks == students[i]->marks)
        {
            if (topStudent->id > students[i]->id)
            {
                topStudent = students[i];
            }
        }
    }


    for(int i =0;i< n;i++){
        if (students[i] != topStudent){
            delete students[i];
        }
    }

    return topStudent;
}

int main()
{

    int T;
    cin >> T;

    for (int t = 0; t<T; t++)
    {
        Student *topstudent = fun(3);
        cout << topstudent->id << " " << topstudent->name << " " << topstudent->section << " " << topstudent->marks << endl;
        delete topstudent;
    }

    return 0;
}