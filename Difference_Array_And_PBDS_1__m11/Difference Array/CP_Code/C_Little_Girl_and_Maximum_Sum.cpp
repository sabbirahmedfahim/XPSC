// resolved [isn't it nice?]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, queries; cin >> n >> queries;

    /* index ke contribution onujai prioratize korbo*/
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    vector<ll> diff(n+2);
    while (queries--)
    {
        int l, r; cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }
    
    vector<ll> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i-1] + diff[i];
        // cout << pref[i] << ' ';
    }
    // cout << nl;

    sort(pref.begin()+1, pref.end()); reverse(pref.begin()+1, pref.end());
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << pref[i] << ' ';
    // }
    // cout << nl;

    sort(v.begin()+1, v.end()); reverse(v.begin()+1, v.end());
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += (v[i] * pref[i]);
    }
    
    cout << res << nl;

    return 0;
}