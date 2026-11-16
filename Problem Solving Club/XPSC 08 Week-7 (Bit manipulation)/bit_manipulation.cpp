#include <bits/stdc++.h>
using namespace std;
bool check_kth_bit_ON_or_OFF(int n, int k)
{
    return ((n >> k) & 1);
}
bool Check_if_a_bit_is_set(int n, int k){
    return ((n>> k) & 1);
}

bool check_if_the_numer_is_divisible_by_power_of_2(int n){
    
}
// printing the decimal to octal
void print_ON_and_OFF_bit(int n)
{
    for (int k = 7; k >= 0; k--)
    {
        if (check_kth_bit_ON_or_OFF(n, k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int turn_ON_kth_bits(int n, int k)
{

    return (n | (1 << k));
}
int turn_OFF_kth_bits(int n, int k)
{
    return (n & (~(1 << k)));
}
int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << check_kth_bit_ON_or_OFF(45,2);
    // print_ON_and_OFF_bit(45);
    // cout << turn_ON_kth_bits(45,4);
    // cout << turn_OFF_kth_bits(45, 4);
    cout << toggle_kth_bit(45,3);

    return 0;
}