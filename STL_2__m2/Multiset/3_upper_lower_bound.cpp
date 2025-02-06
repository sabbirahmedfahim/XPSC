#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input:
6
2 9 6 2 2 9
*/
int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        ml.insert(data); // O(logN)
    }

    // Similar concept to 'set' but allows duplicate elements

    // lower bound -> find + erase -> O(logN) + O(logN) -> O(logN)
    // Returns an iterator(to the first element -> it.first) that is greater or equal than the given key
    auto it = ml.lower_bound(2); 
    if(it == ml.end()) cout << "lower bound is not found" << nl;
    else 
    {
        cout << *it << nl;
        ml.erase(it);
        print(ml);
    }

    cout << nl;

    // upper bound -> find + erase -> O(logN) + O(logN) -> O(logN)
    // Returns an iterator to the first element that is strickly greater than the given key
    auto it_2 = ml.upper_bound(5);
    if(it_2 == ml.end()) cout << "upper bound is not found" << nl;
    else 
    {
        cout << *it_2 << nl;
        ml.erase(it_2);
        print(ml);
    }

    cout << nl;

    return 0;
}