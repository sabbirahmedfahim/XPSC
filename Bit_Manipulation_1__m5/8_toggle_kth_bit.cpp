#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}
/* 
Toggle means the k-th bit will become 0 if it is 1, and 1 if it is 0. This might be confusing because 
we perform a similar operation for turn_on_kth_bit and turn_off_kth_bit. However, if you observe carefully, 
you will understand that toggling changes 0 to 1 and vice versa, rather than strictly turning the bit on or off.
Bhai XOR mein socho, itna kuchh nahin lagega.
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    /*
    (45)₁₀ → (101101)₂
    */

    cout << toggle_kth_bit(45, 4) << nl;
    cout << toggle_kth_bit(45, 3) << nl;
    cout << toggle_kth_bit(45, 0) << nl;

    return 0;
}