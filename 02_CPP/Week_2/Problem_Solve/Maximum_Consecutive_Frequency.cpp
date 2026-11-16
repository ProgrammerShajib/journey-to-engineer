#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    int ar[t];
    for(int i=0;i<t;i++){
        cin >> ar[i];
    }

    int max_Num = ar[0];
    int max_count = 1;

    int current_num = ar[0];
    int count = 1;
    for(int i =1;i<t;i++){
        if(current_num == ar[i]){
            count++;
        }else{
            if(count > max_count){
                max_count = count;
                max_Num = current_num;
            }

            current_num = ar[i];
            count = 1;
        }
    }

    if(count > max_count ){
        max_count = count ;
        max_Num = current_num;
    }

    cout << max_Num << " " << max_count;
    return 0;
}