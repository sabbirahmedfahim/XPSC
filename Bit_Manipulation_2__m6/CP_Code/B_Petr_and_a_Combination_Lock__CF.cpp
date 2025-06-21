#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    // let, 1 -> clock-wise; 0 -> anti-clock-wise [or vice-verca]
    bool is_found = false;
    for (int mask = 0; mask < (1 << n) && !is_found; mask++) 
    { 
        int sum = 0;
        for (int k = 0; k < n; k++) 
        {
            // if ((mask >> v[k]) & 1) sum += v[k]; // v[k] has no job with combination
            if ((mask >> k) & 1) sum += v[k];
            else sum -= v[k];
        }
        if(sum%360 == 0) is_found = true;
    }
    if(is_found) cout << "YES" << nl;
    else cout << "NO" << nl;

    return 0;
}
// https://codeforces.com/problemset/problem/1097/B