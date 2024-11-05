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

    // if we directly use erase function, it will erase all occurrences of the specified element
    multiset<int> ml_2 = ml;
    if(ml_2.count(9)) /// O(logN + k)
    {
        ml_2.erase(9); print(ml_2);
    }
    else cout << "not found, unable to erase" << nl;

    cout << nl;

    // Erasing a single occurrence of the specified element
    if(ml.count(9)) // O(logN) + O(logN) -> O(2.logN) [think twice before working on big dataset]
    {
        auto it = ml.find(9);
        ml.erase(it); // delete iterators location
        print(ml);
    }
    else cout << "not found, unable to erase" << nl;

    return 0;
}