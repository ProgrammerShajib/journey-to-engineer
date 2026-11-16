 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     ios_base::sync_with_stdio(false); 
     cin.tie(NULL);
     
     int n , q;cin >> n >> q;
     vector<int> a(n+2), d(n+2), prefix(n+2);

     for(int i = 1;i<=n;i++ ){
        cin>> a[i];
     }

    
     for(int j = 0 ;j<q;j++){
        int l, r , x;
        cin>> l >> r >> x;
        d[l] += x;
        d[r+1] -= x;
     }

    for(int i = 1;i<n+2;i++){
        prefix[i] = prefix[i-1] + d[i];
    }
    for(int i = 1;i<n+1;i++){
        cout << a[i] + prefix[i] <<" ";
    }
     return 0;
 }