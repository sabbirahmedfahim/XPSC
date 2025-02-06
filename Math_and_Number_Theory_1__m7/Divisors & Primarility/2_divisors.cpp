/*
divisors are divisors. for example, the divisors of 12 are -> 1, 2, 3, 4, 6, 12
formally, n%x == 0
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; 
    // cin >> n;
    n = 12;
    
    // for (int i = 1; i <= n; i++) // O(N) -> naive
    // {
    //     if(n%i == 0) cout << n/i << " ";
    // }
    
    for (int i = 1; i <= sqrt(n); i++) // O(logN)
    {
        // cout << i << " " << n/i << " ";
        if(n%i == 0) 
        {
            cout << i << " ";
            if(i != n/i) cout << n/i << " "; // detect duplicates
        }
    }

    cout << nl << nl;
    /* 
        a * b <= n
    =>  a * a <= n
    =>  a² = n or a * a = n
    =>  a = √n
    */

    for (int i = 1; i * i <= n; i++) // O(logN) [ekh e kotha]
    {
        // cout << i << " " << n/i << " ";
        if(n%i == 0) 
        {
            cout << i << " ";
            if(i != n/i) cout << n/i << " "; // detect duplicates
        }
    }

    cout << nl << nl;

    // now play with divisors
    vector<ll> divisors;
    for (int i = 1; i <= sqrt(n); i++) // O(logN)
    {
        if(n%i == 0) 
        {
            divisors.push_back(i);
            if(i != n/i) divisors.push_back(n/i);
        }
    }
    sort(all(divisors));
    print(divisors);

    return 0;
}