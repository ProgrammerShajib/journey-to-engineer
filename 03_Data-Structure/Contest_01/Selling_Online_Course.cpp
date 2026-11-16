#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    cin >>a;
    if (a== 0) {
        cout << 0;
        return 0;
    }
    long double commission = 0.2L*a;
    long long courses  = ceil(100.0L / commission);
    cout << courses;
    return 0;
}
