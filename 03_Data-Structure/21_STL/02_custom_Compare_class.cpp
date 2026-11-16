#include<bits/stdc++.h>
using namespace std; 
class Student{
    public: 
    string name;
    int r, w;
    
    Student(string name, int r, int w){
        this->name = name ;
        this->r = r;
        this->w = w;
    }
};


// in the cmp class the Oprator is doing oposit like if we want acending then use the oposite sign in the condition 
class cmp{
    public: 
    bool operator()(Student l , Student r){
        if(l.w < r.w){
            return true;
        }else if(l.w > r.w){
            return false ;

        }else{
            return l.r > r.r;
        }
    }
};
int main(){
    priority_queue<Student, vector<Student> , cmp> pq;
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        string name;
        int r, w;
        cin >> name >> r >> w;

        Student ob(name, r, w);
        pq.push(ob);
    }
    
    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().r << " " << pq.top().w << "\n"; 
        pq.pop();
    }
    return 0;
}