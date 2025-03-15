#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v = {4, 2, 9, 4, 1, 3}; // this array is out of topic, just storing test cases instead of cph extension uKnow

    pbds<int> p;
    for(auto e : v)
    {
        p.insert(e);
    }
    for(auto e : p) // carries duplicate. multset detected :D
    {
        cout << e << ' ';
    }
    cout << nl << nl;


    return 0;
}