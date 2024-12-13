#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a = 1;
    cout << (a << 40) << nl; // garbage values ashbe because 2^40 is crossed integer limit
    cout << nl;

    // safe side -> use long long
    ll x = 1;
    cout << (x << 40) << nl; // accurate value
    cout << nl;

    // alternative - just add 1LL *
    cout << (1LL * a << 40) << nl;

    return 0;
}