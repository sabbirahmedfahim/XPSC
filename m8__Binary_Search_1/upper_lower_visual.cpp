#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v = {10, 20, 30, 30, 30, 40, 40, 50};

    // upper_bound returns an iterator to the first element greater than the given value
    auto up = upper_bound(all(v), 20); 

    // lower_bound returns an iterator to the first element that is not less than the given value
    auto low = lower_bound(all(v), 39); 
    
    cout << "upper position -> " << up - v.begin() << nl;
    cout << "lower position -> " << low - v.begin() << nl;

    return 0;
}