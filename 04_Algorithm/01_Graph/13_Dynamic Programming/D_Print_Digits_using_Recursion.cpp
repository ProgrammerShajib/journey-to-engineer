#include <bits/stdc++.h>
using namespace std;

void recursion(long long int n)
{
    if (n == 0)
    {
        return;
    }

    recursion(n / 10);
    cout << n % 10 << " ";
}
int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        if(a == 0){
            cout << a <<" ";
        }else{

            recursion(a);
        }

        cout << endl;
    }
    return 0;
}