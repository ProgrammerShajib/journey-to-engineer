 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>  n;
	    vector<int> z;
	    vector<int> a;
	    for(int i = 0;i<n;i++){
	        int d ;cin>> d;
	        if(d == 0){
	            z.push_back(d);
	        }else{
	            a.push_back(d);
	        }
	    }
	    
	    if(z.size()> 0){
	        for(auto c : z)cout << c <<" ";
	    }
	    if(a.size()> 0){
	        for(auto c : a)cout << c <<" ";
	    }
	    
	    cout << endl;
	}

}