#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E5 + 5;
vector<int> adjList[N];
void solve()
{
    int n, e; cin>> n >> e;
    set<int> st;
    while (e--)
    {
        int a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a); 

        st.insert(a); st.insert(b);
    }

    map<int, int> freq;
    for(auto e : st)
    {
        freq[adjList[e].size()]++;
    }

    int mxCnt = -1, mnCnt = -1;
    for(auto [x, y] : freq)
    {
        // cerr << x << " " << y << nl;
        if(x == 1) continue;

        if(mxCnt == -1) mxCnt = x;
        else mnCnt = x;
    }

    if(freq.size() == 2)
    {
        cout << mxCnt << " " << mxCnt - 1 << nl; return;
    }

    if(mxCnt < mnCnt) swap(mxCnt, mnCnt);
    // cerr << mxCnt << " " << mnCnt << nl;

    if(freq[mxCnt] == 1) cout << mxCnt << " " << mnCnt - 1 << nl;
    else cout << mnCnt << " " << mxCnt - 1 << nl;

    for(auto &e : adjList)
    {
        e.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    
    return 0;
}