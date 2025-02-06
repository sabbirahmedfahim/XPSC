#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n = 2;
    vector<int> v(n);
    v[0] = 34; v[1] = 65;

    v.size(); // O(1)
    v.empty(); // O(1)

    v.clear(); // O(n)
    v.resize(4); // O(n)

    return 0;
}