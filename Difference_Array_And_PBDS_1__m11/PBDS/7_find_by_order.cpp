#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v = {4, 2, 9, 4, 1, 3}; // this array is out of topic, just storing test cases instead of cph extension uKnow

    pbds<int> p;
    for(auto e : v)
    {
        p.insert(e);
    }
    
    /* the process of calculating find by order in both set, multiset is same */
    auto it = p.find_by_order(0); // returns iterator [0th index e kun value ache]

    cout << *it << nl << nl;

    for(auto e : p)
    {
        cout << e << ' ';
    }
    cout << nl;

    return 0;
}