#include <bits/stdc++.h>
using namespace std;
void insert_at_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {

        int parent_idx = (current_idx - 1) / 2;
        if (v[current_idx] > v[parent_idx])
        {
            swap(v[current_idx], v[parent_idx]);
        }
        else
        {
            break;
        }
        current_idx = parent_idx;
    }
}

void print_heap(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void delete_heap(vector<int> &v)
{
    cout <<  v[0] << " is deleted --> ";
    v[0] = v.back();
    v.pop_back();
    int current_idx = 0;
    while (true)
    {

        int left_idx = current_idx * 2 + 1;
        int right_idx = current_idx * 2 + 2;

        int left_val = INT_MAX, right_val = INT_MAX;

        if (left_idx < v.size() - 1)
            left_val = v[left_idx];
        if (right_idx < v.size() - 1)
            right_val = v[right_idx];

        if (left_val > right_val && left_val > v[current_idx])
        {
            swap(v[left_idx], v[current_idx]);
            current_idx = left_idx;
        }
        else if (right_val > left_val && right_val > v[current_idx])
        {
            swap(v[right_idx], v[current_idx]);
            current_idx = right_idx;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_at_heap(v, val);
    }

    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}