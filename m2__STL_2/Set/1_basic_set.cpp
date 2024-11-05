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

    // print basic
    // auto it = s.begin();
    // it++;
    // it++;
    // it--;
    // cout << *it << nl;

    // print method-1
    for(auto it = s.begin(); it != s.end(); it++) cout << *it << " ";

    cout << nl << nl;

    // print method-2
    print(s);

    cout << nl;

    // find operation-1 -> O(logN)
    auto it = s.find(6);
    if(it != s.end()) cout << "found" << nl;
    else cout << "not found" << nl;

    cout << nl;

    // find operation-2 -> O(logN)
    if(s.count(6)) cout << "found" << nl;
    else cout << "not found" << nl;

    cout << nl;

    // erase operation -> O(logN) ***
    if(s.count(6)) 
    {
        s.erase(6); print(s);
    }
    else cout << "not found, unable to erase" << nl;

    cout << nl;


    

    return 0;
}