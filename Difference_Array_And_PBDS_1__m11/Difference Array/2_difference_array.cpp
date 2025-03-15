#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve() // O(n x q) -> O(n^2) [naive]
{
    int n = 5, q = 3;
    vector<int> a = {2, 5, 1, 8, 14};

    vector<tuple<int, int, int>> queries = {{1, 4, 2}, {2, 5, 6}, {2, 4, 3}}; // 1-based
    /* don't be confused with fancy tuple, it's nothing but a left, right & value pair */

    for(auto e : queries) // O(n x q)
    {
        auto [l, r, data] = e;
        l--, r--; // converting 1-based to 0-based indexing

        for (int j = l; j <= r; j++)
        {
            a[j] += data;
        }
    }

    print(a);
}
void solve2() // O(n * 1) -> O(n) [optimized]
{
    int n = 5, q = 3;
    vector<int> a = {2, 5, 1, 8, 14};
    vector<int> v(n+1);
    /* Don't confuse with a, v vector. Array a is used to store elements and array v
    is used for operation(main array), maintaing 1-based index */

    for (int i = 1; i <= n; i++) // 1-based indexing for simplicity
    {
        v[i] = a[i-1];
    }
    // print(v);

    vector<tuple<int, int, int>> queries = {{1, 4, 2}, {2, 5, 6}, {2, 4, 3}}; // 1-based
    /* don't be confused with fancy tuple, it's nothing but a left, right & value pair */

    vector<int> diff(n+2), pref(n+2);

    for(auto e : queries)
    {
        auto [l, r, data] = e;  

        diff[l] += data;
        diff[r + 1] -= data;
    }
    
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i-1] + diff[i];
    }
    
    // for (int i = 1; i <= n; i++) // recheck prefix
    // {
    //     cout << pref[i] << ' ';
    // }
    // cout << nl;

    for (int i = 1; i <= n; i++) // O(n)
    {
        cout << pref[i] + v[i] << ' ';
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // solve(); // naive
    solve2(); // optimized

    return 0;
}
    /* summary */ 
    /*
    vector<int> v(n+1); // let, initialized with values
    vector<int> diff(n+2), pref(n+2);

    for (int i = 1; i <= q; i++)
    {
        int l, r, data; cin >> l >> r >> data;

        diff[l] += data;
        diff[r + 1] -= data;
    }

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i-1] + diff[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] + pref[i] << ' ';
    }
    cout << nl;
    */
