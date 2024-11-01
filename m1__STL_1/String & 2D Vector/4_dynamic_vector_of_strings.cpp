#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input:
3
abcd
phitron
programming
*/
int main()
{
    FAJR_BOOST()

    int row; cin >> row;

    vector<string> v;
    for (int i = 0; i < row; i++)
    {
        string s; cin >> s;
        v.push_back(s);
    }
    
    for (int i = 0; i < row; i++)
    {
        // cout << v[i] << nl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << nl;
    }
    

    return 0;
}