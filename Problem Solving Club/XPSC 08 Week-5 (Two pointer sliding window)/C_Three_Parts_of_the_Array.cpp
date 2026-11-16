#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n; cin >>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        int a;cin >> v[i];
    }
  

    long long sum1 = 0, sum2 = 0 , msum = 0;
    int l = 0, r = n-1;

    while(l<= r){

        if(sum1<= sum2){
            sum1 += v[l];
            l++;
        }else{
            sum2 += v[r];
            r--;
        }

        if(sum1 == sum2){
            msum = sum1;
        }


    }

    cout << msum;

    return 0;
}