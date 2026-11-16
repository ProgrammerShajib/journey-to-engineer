#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v[i] = a;
    }

    int l = 0, r = n - 1;
    int mn = 1, mx = n;
    while (l <= r)
    {
      if (v[l] == mn)
      {
        l++, mn++;
      }
      else if (v[l] == mx)
      {
        l++, mx--;
      }
      else if (v[r] == mn)
      {
        r--, mn++;
      }
      else if (v[r] == mx)
      {
        r--, mx--;
      }
      else
      {
        break;
      }
    }

    if (l <= r)
    {
      cout << l + 1 << " " << r + 1 << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }
  return 0;
}