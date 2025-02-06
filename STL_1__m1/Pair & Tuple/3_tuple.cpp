#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()
    
    // initialization method-1
    // tuple <string, int, string, float> t = make_tuple("Sabbir", 234, "Biology", 93.46); // name, roll, subject, marks

    // initialization method-2
    tuple <string, int, string, float> t = {"Sabbir", 234, "Biology", 93.46}; // name, roll, subject, marks

    // printing method-1
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << " " << get<3>(t) << nl;
    
    cout << nl;

    // printing method-1
    auto [name, roll, subject, marks] = t;
    cout << name << " " << roll << " " << subject << " " << marks << nl;

    return 0;
}