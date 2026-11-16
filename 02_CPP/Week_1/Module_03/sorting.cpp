#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i<n; i++){
       cin >> ar[i];
    }
    sort(ar, ar+n); // Ascending order
    // sort(ar, ar+n, greater<int>());  // Descending order
    for(int i = 0; i<n; i++){
        cout << ar[i] << " ";
    }


    return 0;
}