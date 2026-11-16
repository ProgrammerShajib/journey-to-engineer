#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int capacity = 2;
    int size = 0;

    int *ar = new int[capacity];
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
             
            if (size == capacity)
            {
                capacity *= 2;
                int *temp = new int[capacity];
                copy(ar, ar + size, temp);
                delete[] ar;
                ar = temp;
            }
            ar[size++] = i;
            if (i != n / i)
            {
                if (size == capacity)
                {
                    capacity *= 2;
                    int *temp = new int[capacity];
                    copy(ar, ar + size, temp);
                    delete[] ar;
                    ar = temp;
                }
                ar[size++] = n / i;
            }
        }
    }

    sort(ar, ar+sizeof(ar));
    for(int i = 0;i<sizeof(ar);i++){
        cout << ar[i] << " ";
    }
    return 0;
}