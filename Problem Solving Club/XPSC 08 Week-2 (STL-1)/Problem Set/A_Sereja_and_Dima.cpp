#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> v;
    int t = n;
    while(t--){
        int c;
        cin >> c;
        v.push_back(c);
    }
    bool s = true;
    bool d = false;

    int s_sum = 0;
    int d_sum = 0;
    for(int i = 0 , j = n-1; i<=j ;){

        if(s){

            if(v[i] >= v[j]){
                s_sum += v[i];
                i++;
                s = false;
                d = true;
            }else{
                s_sum += v[j];
                j--;
                s = false;
                d = true;
                
            }
        }else if(d){
            if(v[i] >= v[j]){
                d_sum += v[i];
                i++;
                s = true;
                d = false;
            }else{
                d_sum += v[j];
                j--;
                s = true;
                d = false;
                
            }

        }
    }

    cout << s_sum <<" " << d_sum;
    return 0;
}