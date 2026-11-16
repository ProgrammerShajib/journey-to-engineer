#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a;
    int ar[a];
    for (int i =0;i< a;i++){
        cin >> ar[i];
    }
    int left = 0;
    int right = a-1;
    while (left < right)
    {
        swap(ar[left], ar[right]);
        left++;
        right--;
   
    }
    
    for (int i =0;i< a;i++){
        cout << ar[i] << " " ;
    }


    return 0;
}