#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    string s = "Phitron";
    cout << s.substr(0, 3) << nl; // zero-th index theke 3ta character
    cout << s.substr(1, 2) << nl; // 1-st index theke 2 ta character

    cout << nl;

    cout << s.substr(3) << nl; // 3-rd index theke shob

    return 0;
}