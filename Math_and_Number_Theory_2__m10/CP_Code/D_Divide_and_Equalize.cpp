#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
Instead of just adding divisors, we will add and remove divisors.
*/
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    if(n == 1)
    {
        cout << "YES" << nl; return;
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++) // for each VALUE, find the prime factorization
    {
        // map<int, int> cnt;
        for (int j = 2; j*j <= v[i]; j++)
        {
            while (v[i]%j == 0)
            {
                // cnt[j]++;
                mp[j]++;
                v[i] /= j;
            }
        }
        if(v[i] > 1) mp[v[i]]++;

        // for(auto [key, val] : mp) cout << key << " -> " << val << nl; cout << nl; 
    }
    for(auto [key, val] : mp) 
    {
        // cout << key << " " << val << nl; cout << nl;
        if(val%n)
        {
            cout << "NO" << nl; return;
        }
    }
    cout << "YES" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}