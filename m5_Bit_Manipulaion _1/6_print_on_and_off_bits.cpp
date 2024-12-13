#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int check_kth_bit_on_or_off(int n, int k) 
{
    return (n >> k) & 1;
}
void print_on_and_off_bits(int n) // Exploring bits from 30th (MSB) to 0th (LSB), that doesn't means the range limited
{
    for (int k = 30; k >= 0; k--)
    {
        if(check_kth_bit_on_or_off(n, k)) cout << 1 << " ";
        else cout << 0 << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    /*
    (45)₁₀ → (101101)₂
    */
    print_on_and_off_bits(11);  

    return 0;
}