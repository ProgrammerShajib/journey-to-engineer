#include<bits/stdc++.h>
using namespace std;
int val[1005];
int weight[1005];

int knapsack(int i, int max_weight){
    if(i < 0 || max_weight <= 0){
        return 0;
    }
    if(weight[i] <= max_weight){

        // Amar kase ekon 2ta option ase
        // 1 . Bag e rako 2. Bag e rakbo na
        int op1 = knapsack(i-1, max_weight - weight[i] ) + val[i];
        int op2 = knapsack(i-1, max_weight);
    
        return max(op1, op2);
    }else{
        int op2 = knapsack(i-1, max_weight);
        return op2;
    }
}
int main(){

    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> weight[i];
    }
    
    for(int i =0;i<n;i++){
        cin >> val[i];
    }
    int max_weight;
    cin >> max_weight;
    int ans = knapsack(n-1, max_weight);
    cout << ans;
    return 0;
}