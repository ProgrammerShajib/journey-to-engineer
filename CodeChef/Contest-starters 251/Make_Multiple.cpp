#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>> t;
	while(t--){
	    int a;cin>> a;
	    
        int multiple_5 = ((a/5)+1)*5;


	    if(a%3 == 0){
	        cout << 0 << "\n";
	    }else if((a+1)%3 ==0 || multiple_5 % 3 == 0){
            cout << 1 << "\n";
	    }else{
            cout << 2 << "\n";
        }
	}

}
