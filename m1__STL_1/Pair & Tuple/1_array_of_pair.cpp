#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input: 
4
Sabbir 324
Fahim 545
Munna 445
Karim 676
*/
int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    pair<string, int> students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }
    // printing method-1
    for(auto [name, roll] : students) cout << name << " " << roll << nl;
    cout << nl;

    // printing method-2
    for(auto data : students) cout << data.first << " " << data.second << nl;

    return 0;
}