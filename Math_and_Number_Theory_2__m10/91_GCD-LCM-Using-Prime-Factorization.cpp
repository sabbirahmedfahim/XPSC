#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int a, int b)
{
    return (a/__gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int x = 18; // prime factors -> 2, 3, 3
    int y = 24; // prime factors -> 2, 2, 2, 3

    cout << "GCD --> " << __gcd(x, y) << nl;
    /*
    From their prime factors, the common divisors (smallest factors) are 2^1 and 3^1, 
    so 2 * 3 == 6.
    We didn’t consider values directly; instead, we used prime factorization.
    */

    cout << nl;

    cout << "LCM --> " << LCM(x, y) << nl;
    /*
    For LCM, we consider the largest factors.
    18 --> 2, 3, 3
    24 --> 2, 2, 2, 3
    The highest powers are 2^3 and 3^2, so 8 * 9 = 72.

    If there are no common factors, we assume the smallest factor has a power of zero.
    */

    return 0;
}