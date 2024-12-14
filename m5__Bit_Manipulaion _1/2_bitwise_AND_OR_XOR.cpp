#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a = 11, b = 19;
    cout << (a & b) << nl; // AND
    // 
    cout << (a | b) << nl; // OR
    // 
    cout << (a ^ b) << nl; // XOR

    return 0;
}