#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
/* anyways, if a bit is on and we're pushing it to turn on, though it doesn't make
sense, will not affect because ... YOU SHOULD UNDERSTAND */
}
int turn_off_kth_bit(int n, int k) // if you understand turning on k-th bit, it's nothing but the opposite operation
{
    return (n & (~(1 << k)));
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    /*
    (45)₁₀ → (101101)₂
    */
    int n = 45;
    cout << turn_on_kth_bit(n, 4) << nl;
    cout << nl;

    cout << turn_off_kth_bit(n, 3) << nl;

    return 0;
}