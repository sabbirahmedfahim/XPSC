#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n = 90;
    
    map<int, int> mp;
    for (int i = 2; i*i <= n; i++)
    {
        while (n%i == 0)
        {
            mp[i]++; // count occurance of each factor
            n /= i;
        }
    }
    if(n > 1) mp[n]++;

    int tot = 1;
    for(auto [key, exponeNt] : mp) 
    {
        // cout << key << " -> " << val << nl;
        tot *= (exponeNt+1);
    }
    cout << tot << nl;  

    return 0;
}