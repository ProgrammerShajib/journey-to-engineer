#include<bits/stdc++.h>
using namespace std;
 
int countSetBits(long long n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1); // শেষ বিটটি 1 হলে 1 যোগ হবে, 0 হলে 0
        n >>= 1;          // রাইট শিফট (2 দিয়ে ভাগের সমান)
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        int a;cin>> a;

        int cnt = __builtin_popcountll(a);
        int d = countSetBits(a);
        cout << d << endl;

        // if(cnt % 2 == 0){
        //     cout << "EVEN\n";
        // }else{
        //     cout << "ODD\n";
        // }
    }
    
    
    return 0;
}
