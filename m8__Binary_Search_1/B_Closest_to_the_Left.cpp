#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    vector<ll> v(n); for(auto &data : v) cin >> data;
    
    while (q--) // O(q*logN)
    {
        ll key; cin >> key;
        int l = 0, r = n-1, mid, idx = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            // If we need strictly less value, replace >= with > in the condition. ***
            if(key >= v[mid]) // less or equal the key
            {
                idx = mid;
                l = mid + 1; // Searching for the maximum value less than or equal to the key, shift the search space to the right.
            }
            else r = mid - 1;
        }
        if(idx == -1) cout << 0 << nl;
        else cout << idx+1 << nl; // 1-based index  
    }
    

    return 0;
}