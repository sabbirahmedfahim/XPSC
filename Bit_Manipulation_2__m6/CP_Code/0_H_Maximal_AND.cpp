#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, kk; cin >> n >> kk;
    vector<int> v(n); int maxSetBit = 30;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; 
        // maxSetBit = max(maxSetBit, __lg(v[i]));
        // cout << __lg(v[i]) << nl; 
    }

    int ans = 0, AND = (1LL << 31) - 1; // initially all bit on kore rakhlam
    // cout << AND << " -> " << __lg(AND) << nl; // all bit is on
    // for (int i = 0; i <= __lg(AND); i++) // k-th bit on or off
    // {
    //     // if(i & 1) cout << 1 << " "; // wrong way
    //     if((AND >> i) & 1) cout << 1 << " ";
    //     else cout << 0 << " ";
    // }
    
    /*
    Observation: We will prioritize turning on the most significant bits (MSBs) [etna mehenga nehi, right-most bit ta on korar try korte thakbo, see examples]
    instead of smaller bits. For example:
    32 16 8 4 2 1
    Instead of trying to add small values like 
    32 > 16 + 8 + 4 + 2 + 1 = 31,
    16 > 8 + 4 + 2 + 1
    we target the //largest available value// directly, e.g., 32.

    input: 
    1
    7 0
    4 6 6 28 6 6 12
    key-observation:
    4 ->  0 0 1 0 0 
    6 ->  0 0 1 1 0 
    6 ->  0 0 1 1 0 
    28 -> 1 1 1 0 0 
    6 ->  0 0 1 1 0 
    6 ->  0 0 1 1 0 
    12 -> 0 1 1 0 0 

    for each column, we'll calculate the count of off bits, to work with it next
    */
    for (int i = 0; i < n; i++)
    {
        AND &= v[i];
        for (int k = maxSetBit; k >= 0; k--)
        {
            if((v[i] >> k) & 1) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << nl;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
