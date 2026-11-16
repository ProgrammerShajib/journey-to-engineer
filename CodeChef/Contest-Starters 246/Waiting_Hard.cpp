#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n+1), p(n+1,0);
    long long wait = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = max(p[i -1], a[i]);             
        wait += (p[i]- a[i]);   
    }

    vector<long long> c(n + 1, 0);
    long long m1 = 1, m2 = 1; 
    int idx = 0;            

    for (int i = 1; i <= n; i++) {
        if (a[i]>m1) {
            m2= m1;
            m1 =a[i];
            idx = i;
        } else if (a[i] > m2) {
            m2 = a[i];
        }
        
        if (idx > 0) {
            c[idx] += (m1 - m2);
        }
    }

    long long m_reduce = 0;
    p[0] = 1;  
    for (int k = 1; k <= n; k++) {
        long long reduction = (p[k - 1] - a[k]) + c[k];
        m_reduce = max(m_reduce, reduction);
    }

    cout << wait - m_reduce << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}