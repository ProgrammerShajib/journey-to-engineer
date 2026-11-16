#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q;
    cin >> n >> q;

    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // creating another vector for stor the prefix sum
    vector <long long int> v2(n+1);
    v2[1] = v[1];
    for(int i = 2;i<=n;i++){
        v2[i] = v2[i-1] + v[i];
    }
    // for(int i = 1;i<=n;i++){
    //     cout << v2[i] << " ";
    // }

    while (q--)
    {
        int start, end;
        cin >> start >> end;
        long long int sum = 0;
        if(start ==  1){  
            sum = v2[end];
        }else{
            sum = v2[end] - v2[start-1];
            
        }
        cout << sum << endl;
    }

    return 0;
}