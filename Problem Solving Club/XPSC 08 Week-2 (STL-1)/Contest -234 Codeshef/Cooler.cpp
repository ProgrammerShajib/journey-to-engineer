#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    int sum =0;
	    for(int i = a;i>b;i--){
	        sum += i;
	    }
        cout << sum << "\n";
	}


}
