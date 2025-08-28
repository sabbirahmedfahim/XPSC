// https://codeforces.com/problemset/problem/1433/D
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> freq;
    for(auto e : a) freq[e]++;
    if(freq.size() == 1)
    {
        cout << "NO" << nl; return;
    }

    int curr_freq = 1E9, midNode = -1;
    for(auto [x, y] : freq)
    {
        if(y < curr_freq)
        {
            midNode = x; curr_freq = y;
        }
    }
    // cout << midNode << nl;

    vector<pair<int, int>> path;
    int firstIdx = -1;
    vector<int> allMidNodeIndeces;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == midNode)
        {
            if(firstIdx == -1) firstIdx = i; 
            else allMidNodeIndeces.push_back(i);
        }
    }
    // print(allMidNodeIndeces);
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] != midNode)
        {
            path.push_back({firstIdx + 1, i + 1}); 
        }
    }
    // for(auto [x, y] : path) cerr << x << " " << y << nl; cerr << nl;

    for (int i = 0; i < n && !allMidNodeIndeces.empty(); i++)
    {
        if(a[i] != midNode)
        {
            path.push_back({i + 1, allMidNodeIndeces.back() + 1});
            allMidNodeIndeces.pop_back();
        }
    }
    for(auto [x, y] : path) cerr << x << " " << y << nl; cerr << nl;

    if(!allMidNodeIndeces.empty()) cout << "NO" << nl;
    else 
    {
        cout << "YES" << nl;
        for(auto [x, y] : path)
        {
            cout << x << " " << y << nl; 
        }
    }
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