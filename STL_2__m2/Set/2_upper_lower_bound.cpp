#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input:
6
2 9 6 2 9 4
*/
int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        s.insert(data); // O(logN)
    }

    // lower bound -> O(logN)
    // Returns an iterator(to the first element -> it.first) that is greater or equal than the given key
    auto it = s.lower_bound(3); 
    if(it == s.end()) cout << "lower bound is not found" << nl;
    else cout << *it << nl;

    cout << nl;

    // upper bound -> O(logN)
    // Returns an iterator to the first element that is strickly greater than the given key
    auto it_2 = s.upper_bound(6);
    if(it_2 == s.end()) cout << "upper bound is not found" << nl;
    else cout << *it_2 << nl;

    cout << nl;

    auto it_3 = s.upper_bound(9);
    if(it_3 == s.end()) cout << "upper bound is not found" << nl;
    else cout << *it_3 << nl;

    return 0;
}