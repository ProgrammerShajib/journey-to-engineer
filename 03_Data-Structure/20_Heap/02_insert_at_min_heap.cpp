#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    int myval;
    cin >> myval;
    cout << endl <<myval;
    v.push_back(myval);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {

        int parent_idx = (current_idx - 1) / 2;
        if (v[current_idx] < v[parent_idx])
        {
            swap(v[current_idx], v[parent_idx]);
        }
        else
        {
            break;
        }
        current_idx = parent_idx;
    }

    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}