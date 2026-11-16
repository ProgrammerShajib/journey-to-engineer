#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define ll long long
#define ve vector
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define strive ios::sync_with_stdio(false); cin.tie(nullptr);
#define lockin int tc; cin >> tc; while (tc--)
const ll INF = (ll)1e18;
const ll MOD = (ll)1e9+7;

ll T[(ll)8e5+5], A[(ll)2e5+5];

void build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        T[v] = 0;
    } else {
        ll tm = tl + (tr - tl)/2;
        build(2*v, tl, tm);
        build(2*v+1, tm+1, tr);
        T[v] = T[2*v] + T[2*v+1];
    }
}

void update(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r) return;
    if (l == tl && r == tr) {
        T[v]++;
    } else {
        ll tm = tl + (tr - tl)/2;
        update(2*v, tl, tm, l, min(r, tm));
        update(2*v+1, tm+1, tr, max(l, tm+1), r);
    }
}

ll query(ll v, ll tl, ll tr, ll idx) {
    if (tl == tr) {
        return T[v];
    } else {
        ll tm = tl + (tr - tl)/2;
        if (idx <= tm) return T[v] + query(2*v, tl, tm, idx);
        else return T[v] + query(2*v+1, tm+1, tr, idx);
    }
}

void solve() {
    ll N, Q; cin >> N >> Q;
    for (ll i = 1; i <= N; i++) cin >> A[i];
    build(1, 1, N);
    while (Q--) {
        ll P; cin >> P;
        P--;
        if (P) { //2
            ll idx; cin >> idx;
            ll X = query(1, 1, N, idx);
            string S = to_string(A[idx]);
            ll comp = min((ll)S.size(), X);
            while (comp-- && (ll)S.size() > 1) {
                ll nw = 0;
                for (auto x : S) nw += x - '0';
                S = to_string(nw);
            }
            cout << S << endl;
        } else {
            ll a, b; cin >> a >> b;
            update(1, 1, N, a, b);
        }
    }
}

int main(){

    strive

    lockin solve();
}