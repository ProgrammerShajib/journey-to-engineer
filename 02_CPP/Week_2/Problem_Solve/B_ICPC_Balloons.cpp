#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int solved[26] = {0};

        int balons =0;
        for (char c : s){

            int index = c - 'A';
            // cout << "Index = " << index  << endl;
            if(solved[index] == 0){
                balons +=2;
                solved[index] = 1;
            }else {
                balons +=1;
                // solved[index] =1;
            }
        }


        cout << balons << endl;
        /* code */
    }
    
    return 0;
}