#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
What if we need to find out gcd or lcm or multiple values? Check out "Paint the Array" problem
*/
int GCD(int a, int b) // O(log(min(a, b))
{
    return __gcd(a, b);
}
int LCM(int a, int b)
{
    // return ((a*b)/__gcd(a, b)); // accurate
    return (a/__gcd(a, b)) * b; // overflow handle
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b; 
    // cin >> a >> b;
    a = 16, b = 24;
    cout << GCD(a, b) << nl;
    cout << nl;
    cout << LCM(a, b) << nl;

    return 0;
}