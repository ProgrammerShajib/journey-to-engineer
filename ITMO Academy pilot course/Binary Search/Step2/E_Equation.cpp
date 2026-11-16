#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    double c ;cin >> c;
    auto ok = [&](double mid){
        return ((mid*mid) + sqrt(mid)) >= c;
    };
    double l = 0 , r = 1e10;
    for(int i = 0;i<100;i++){
        double mid = l + (r-l)/2;
        if(ok(mid)){
            r = mid;
        }else{
            l = mid;
        }
    }

    cout << fixed << setprecision(8) << r ;
    return 0;
}