#include<bits/stdc++.h>
using namespace std;
class Tree{

    public: 

    string name , color;
    
    Tree(string name, string color){
        this->name = name;
        this->color = color;
    }
};

class CMP{
public:
    bool operator()(const Tree &a, const Tree &b) const {
        if (a.name != b.name) {
            return a.name < b.name;   // compare names first
        }
        return a.color < b.color;     // if same name, compare color
    }
};

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;
    map<Tree, int , CMP> mp;

    while(n--){
        string a, b;
        cin >> a >> b ;
        Tree g(a,b);
        mp[g] = 1;

    }
    cout << mp.size();

    return 0;
}