#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // left-shift
    int a = 11;
    cout << (a << 1) << nl; // 1 position left shift
    cout << (a << 2) << nl; // 2 position left shift
    cout << nl;

    // GUESS the output 
    cout << (1 << 4) << nl; // hints: 128 64 32 16 8 4 2 1
    // ummm... 2^4
    cout << nl;

    // right-shift
    a = 14;
    cout << (a >> 1) << nl;
    cout << (a >> 2) << nl;

    return 0;
}