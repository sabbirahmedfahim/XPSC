#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    // method-1
    // int n = 5;  
    // vector<int> v(n, 54); // assigning all index with 54 // O(n)
    // print(v);  

    // method-2
    vector<int> v;
    int n = 7;
    v.assign(n, 543); // O(n)
    print(v);

    return 0;
}