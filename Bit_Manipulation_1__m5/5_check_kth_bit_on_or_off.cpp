#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Checking whether the k-th bit is on or off is simple. Right-shift the number k times and then perform an AND operation with 1.
If the result is 1, it means the k-th bit is on; otherwise, it is off.
*/
int check_kth_bit_on_or_off(int n, int k) // 1 means on, 0 means off :)
{
    return (n >> k) & 1;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    /*
    (45)₁₀ → (101101)₂
    */
    cout << check_kth_bit_on_or_off(45, 3) << nl;
    cout << check_kth_bit_on_or_off(45, 4) << nl;

    return 0;
}