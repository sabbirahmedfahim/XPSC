#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    vector<int> v = {99, 455, 76};

    // accessing the last element using iterators (method-1)
    auto it = --v.end();
    cout << *it << nl; 

    // accessing the last element (method-2)
    auto it2 = v.rbegin();
    cout << *it2 << nl;

    cout << nl;
    
    // accessing the first element (method-1)
    // auto it3 = ++v.begin(); // hahah, here's the basic
    auto it3 = v.begin();
    cout << *it3 << nl;

    // accessing the first element (method-2)
    auto it4 = --v.rend();
    cout << *it4 << nl;

    

    
  
    return 0;
}