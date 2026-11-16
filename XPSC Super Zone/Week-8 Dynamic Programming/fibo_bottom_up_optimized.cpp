#include<bits/stdc++.h>
using namespace std;

int tabulation(int n){

    if(n<= 1) return n;

    int first = 0;
    int second = 1;
    int next;
    for(int i = 2;i<=n;i++){
        next = first + second;
        first = second;
        second = next;
    }

    return next;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int ans =  tabulation(n);
    cout << ans <<endl;
    return 0;
}