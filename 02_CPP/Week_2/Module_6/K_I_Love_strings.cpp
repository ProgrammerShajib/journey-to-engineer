#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    // cout << n;
    cin.ignore();
    for (int i =0; i<n;i++){
        string s;
        
        getline(cin, s);
       
        stringstream ss(s);
        string word1, word2;
        ss >> word1 >> word2;
         
        
        int maxLenth = max(word1.length(), word2.length());
        string result = "";
        for(int i =0;i < maxLenth;i++){
            if(i < word1.length()){
                result += word1[i];
            }
            if(i < word2.length()){
                result += word2[i];
            }
        }
        cout << result << endl;
    }
    return 0;
}