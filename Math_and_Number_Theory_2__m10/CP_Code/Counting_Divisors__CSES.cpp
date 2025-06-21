#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int mxN = 1E6 + 5;
vector<int> divisors(mxN);
void solve() // O(1)
{
    int n; cin >> n;
    cout << divisors[n] << nl;
}
void preCalculate() // O(nlog(log(n)))
{
    for (int i = 1; i <= mxN; i++)
    {
        for (int j = i; j <= mxN; j+=i)
        {
            divisors[j]++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preCalculate();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
// https://cses.fi/problemset/task/1713