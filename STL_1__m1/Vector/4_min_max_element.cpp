#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    vector<int> v = {3, 5, 674, 6, 2, 33};
    auto mnElement = min_element(v.begin(), v.end()); // auto
    cout << *mnElement << nl; 
    
    auto mxElement = max_element(v.begin(), v.end()); // auto
    cout << *mxElement << nl;

    return 0;
}