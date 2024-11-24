// Resolved after understanding the question from the the resolve class, then solved independently
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    set<ll> distictElements;
    for (int i = 0; i < n; i++)
    {
        if(distictElements.count(v[i])) 
        {
            ll data = v[i];
            while (distictElements.count(data))
            {
                distictElements.erase(data);
                data *= 2;
            }
            distictElements.insert(data);
            cout << distictElements.size() << " ";
        }
        else 
        {
            distictElements.insert(v[i]);
            cout << distictElements.size() << " ";
        }
    }
    cout << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}