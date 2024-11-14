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

    int n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for(auto &data : a) cin >> data;
    for(auto &data : b) cin >> data;

    vector<int> ans;
    
    int cnt = 0;
    int l = 0, r = 0;
    while (r < m)
    {
        if(l < n && a[l] < b[r]) // corner case --> l < n
        {
            cnt++; l++;
        }
        else 
        {
            ans.push_back(cnt);
            r++;
        }
    }
    
    print(ans);

    return 0;
}