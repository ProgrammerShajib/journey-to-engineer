#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    cin>> n;
    int ax, ay, bx, by, cx, cy;
    cin>> ax >> ay >> bx >> by>> cx>> cy;

    bool same_x_side = (bx < ax && cx < ax) || (bx > ax && cx > ax);
    bool same_y_side = (by < ay && cy < ay) || (by > ay && cy > ay);

    if (same_x_side && same_y_side){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}