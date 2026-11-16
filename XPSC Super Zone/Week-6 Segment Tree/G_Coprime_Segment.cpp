#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll INF = 1e18;
const int MAXN = 1e5 + 9;
ll a[MAXN], t[4*MAXN];


void build(int n , int b, int e){

    if(b == e){
        t[n] = a[b];
        return ;
    }
    
    int mid = (b+e)/2, l = 2*n, r = (2*n) +1;
    build(l, b, mid); 
    build(r, mid+1, e);
    
    t[n] = gcd(t[l],t[r]);
}
ll query(int n , int b, int e, int i , int j){

    if(i > e || j < b){
        return 0; 
    }
    if(b>= i && e <= j ){
        return t[n];
    }

    int mid = (b+e)/2, l = 2*n, r = (2*n) +1;
    return gcd(query(l, b, mid, i , j) , query(r, mid+1, e, i , j));
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, m;
    cin >> n ;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }

    build(1,1,n);

    int ans = n+1;
    int l = 1;
    for(int r = 1;r <= n;r++){
        while(l<=r && query(1,1,n,l, r) == 1){
            ans = min(ans,r-l+1);
            l++;
        }
    }
    if(ans == n+1){
        cout << -1 <<"\n";
    }else{
        cout << ans <<"\n";
    }
     
    return 0;
}