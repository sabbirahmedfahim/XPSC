#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    pair<string, pair<int, string>> p = {"dablu",{7,"01714"}}; // name, roll, phone number

    string name = p.first;
    int roll = p.second.first; // second.first haahahhhh
    string phoneNumber = p.second.second;

    cout << name << " " << roll << " " << phoneNumber << '\n';

    return 0;
}