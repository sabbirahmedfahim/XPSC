#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    string s; int k; cin >> s >> k;
    int l = 0, r = 0;
    map<char, int> mp;
    int ans = -1;
    while (r < s.size())
    {
        mp[s[r]]++;
        if(mp.size() == k) ans = max(ans, r-l+1);
        else
        {
            while (mp.size() > k && l <= r) 
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]); 
                l++;
            }
        }
        r++;
    }
    cout << ans << nl;

    return 0;
}