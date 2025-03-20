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

    pbds<pair<int, int > > p;
    for (int i = 0; i < v.size(); i++)
    {
        int data = v[i];
        p.insert({data, i});
    }
    
    for(auto [key, val] : p) // value, index pair for getting the benefit of erase in set
    {
        cout << key << " " << val << nl;
    }
    cout << nl << nl;

    // erase operation
    p.erase({4, 0}); // erasing the first occurance of 4
    for(auto [key, val] : p) // value, index pair for getting the benefit of erase in set
    {
        cout << key << " " << val << nl;
    }

    // how to track the index of a value? (like 4)
    /*
    easy, just use a map, map<int, int> mp; // value == index
    */

    return 0;
}