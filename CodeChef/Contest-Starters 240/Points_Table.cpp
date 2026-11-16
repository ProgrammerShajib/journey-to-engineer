#include <iostream>

using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int X, Y, A, B;
    if (cin >> X >> Y >> A >> B) {
        if (X > A) {
            cout << "Alice\n";
        } 
        else if (A > X) {
            cout << "Bob\n";
        } 
        else {
            if (Y > B) {
                cout << "Alice\n";
            } 
            else if (B > Y) {
                cout << "Bob\n";
            } 
          
            else {
                cout << "Alice\n";
            }
        }
    }
    
    return 0;
}