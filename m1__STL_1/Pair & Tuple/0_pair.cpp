#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    pair<string, int> student = {"Sabbir", 234}; // name, roll

    // print method-1
    cout << student.first << " " << student.second << nl;

    // print method-2 (supports in the latest compilers)
    auto [name, roll] = student;
    cout << name << " " << roll << nl;

    // modifying students name
    student.first = "Fahim";
    cout << student.first << " " << student.second << nl;

    return 0;
}