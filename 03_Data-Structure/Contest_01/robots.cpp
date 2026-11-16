#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    // প্রতিটি রো-এর যোগফল রাখার জন্য
    long long rowSum[a];
    // রো-তে ০ আছে কি না তা রাখার জন্য (০ মানে নেই, ১ মানে আছে)
    bool hasZero[a];

    for(int i = 0; i < a; i++){
        long long currentSum = 0;
        bool zeroFound = false;
        
        for(int j = 0; j < b; j++){
            long long val;
            cin >> val;
            currentSum += val;
            if(val == 0) zeroFound = true;
        }
        
        rowSum[i] = currentSum;
        hasZero[i] = zeroFound;
    }

    // এখন চেক করার পালা
    long long targetSum = -1e18; 
    bool possible = true;

    // প্রথমে একটি 'Fixed Row' (যেখানে ০ নেই) খুঁজে বের করি টার্গেট সেট করার জন্য
    for(int i = 0; i < a; i++){
        if(!hasZero[i]){
            if(targetSum == -1e18){
                targetSum = rowSum[i];
            } else {
                // যদি একাধিক ফিক্সড রো থাকে এবং তাদের যোগফল আলাদা হয়
                if(rowSum[i] != targetSum){
                    possible = false;
                    break;
                }
            }
        }
    }

    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}