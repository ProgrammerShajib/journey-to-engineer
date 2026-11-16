#include <iostream>
using namespace std;
int main()
{
    int x;

    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Hello I am " << x << endl;
        break;
    case 2:
        cout << "Hello I am " << x;
        break;
    default:
        cout << "Sorry I am not Your Lover.";
        break;
    }
    return 0;
}