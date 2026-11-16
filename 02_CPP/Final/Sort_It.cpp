#include<bits/stdc++.h>
using namespace std;

class Student{
     public:
        string name;
        int cls, id,math, eng;
        char sec;
        
};

bool cmp(Student l, Student r){
    int total_l ,total_r; 
    total_l = l.math + l.eng;
    total_r = r.math + r.eng;

    return total_l == total_r ? l.id < r.id : total_l > total_r; 
 
}

int main(){

    int T;
    cin >> T;

    Student s[T];
    for(int i=0;i< T;i++){
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id >> s[i].math >> s[i].eng;
    }

    sort(s, s+T, cmp);

    for(int i =0;i<T;i++){
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].math << " " << s[i].eng << endl;
    }

    return 0;
}