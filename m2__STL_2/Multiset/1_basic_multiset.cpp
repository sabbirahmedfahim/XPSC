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

    // Count Operation: Frequency Check for Element in Multiset (USEFUL FUNCTION***)
    if(ml.count(2)) cout << ml.count(2) << nl; // (O(logN + k)) -> k for k times occurance
    else cout << "not found" << nl;

    cout << nl;

    // print basic
    // auto it = ml.begin();
    // it++;
    // it++;
    // it--;
    // cout << *it << nl;

    // print method-1
    for(auto it = ml.begin(); it != ml.end(); it++) cout << *it << " ";

    cout << nl << nl;

    // print method-2
    print(ml);

    cout << nl;

    // find operation-1 -> O(logN)
    auto it = ml.find(6);
    if(it != ml.end()) cout << "found" << nl;
    else cout << "not found" << nl;

    cout << nl;

    // find operation-2 -> O(logN)
    if(ml.count(6)) cout << "found" << nl;
    else cout << "not found" << nl;

    cout << nl;

    // erase operation -> O(logN) ***
    if(ml.count(6)) 
    {
        ml.erase(6); print(ml);
    }
    else cout << "not found, unable to erase" << nl;

    cout << nl;

    return 0;
}