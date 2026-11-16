#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
        string name;
        int cls, id;
        char section;
};
int main(){

    int a;
    cin >> a;
    Student s[a];
    char sec[a];


    for(int i =0;i<a;i++){
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id;
        sec[i] = s[i].section; 

    }

    for(int j=0;j<a;j++){

        s[j].section = sec[a-j-1];
    }

    for(int i=0;i<a;i++){
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " <<  s[i].id << endl;
    }
    return 0;
}