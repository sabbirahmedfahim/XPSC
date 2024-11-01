#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input: 
3
Sabbir 234 86.43
Fahim 654 67.86
Munna 765 99.56
*/
int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    tuple<string, int, float> student[n];

    // input method-1 ✔️
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> get<0>(student[i]);
    //     cin >> get<1>(student[i]);
    //     cin >> get<2>(student[i]);
    // }
    
    // input method-2 ✔️
    for (int i = 0; i < n; i++)
    {
        string name; int roll; float marks;
        cin >> name >> roll >> marks;
        student[i] = {name, roll, marks};
    }

    // printing method-1 ✔️
    // for (int i = 0; i < n; i++)
    // {
    //     cout << get<0>(student[i]) << " ";
    //     cout << get<1>(student[i]) << " ";
    //     cout << get<2>(student[i]) << nl;
    // }

    // printing method-2 ✔️
    for (int i = 0; i < n; i++)
    {
        auto [name, roll, marks] = student[i];
        cout << name << " " << roll << " " << marks << nl;
    }
    

    return 0;
}