#include<bits/stdc++.h>
using namespace std;

class Student{
     public:
        string name;
        int cls, id,math, eng;
        char sec;
        
};

bool cmp(Student l, Student r){
    // int total_l ,total_r; 
    // total_l = l.math + l.eng;
    // total_r = r.math + r.eng;

    // if(l.eng > r.eng){
    //     return true;
    // }else if(l.eng < r.eng){
    //     return false;
    // }else {
    //     if(l.math > r.math){
    //         return true;
    //     }else if(l.math < r.math){
    //         return false;
    //     }else {
    //         if(l.id < r.id){
    //             return true;
    //         }else {
    //             return false;
    //         }
    //     }
    // }

    // return total_l == total_r ? l.id < r.id : total_l > total_r; 
 
    if(l.eng != r.eng) return l.eng > r.eng;
    if(l.math != r.math) return l.math > r.math;
    return l.id < r.id; 
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