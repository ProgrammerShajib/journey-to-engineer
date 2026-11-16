#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>> n >> k;
	
	int t1 = k + n*60;
	int t2 = n*100;
	int res = min(t1,t2);
	cout <<res;
	

}
