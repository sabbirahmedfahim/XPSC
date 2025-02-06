#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    map<int, int> mp;
    mp.insert({10, 230});
    mp.insert({2, 65});
    mp.insert({55, 76});
    mp.insert({8, 3});
    mp.insert({767, 4});

    for(auto [key, data] : mp) cout << key << " -> " << data << nl;

    // lower bound -> O(logN)
    // Returns an iterator(to the first element -> it.first) that is greater or equal than the given key
    auto it = mp.lower_bound(9); 
    cout << it->first << " " << it->second << nl;
    

    cout << nl;

    // upper bound -> O(logN)
    // Returns an iterator to the first element that is strickly greater than the given key
    auto it2 = mp.upper_bound(10);
    cout << it2->first << " " << it2->second << nl;

    return 0;
}