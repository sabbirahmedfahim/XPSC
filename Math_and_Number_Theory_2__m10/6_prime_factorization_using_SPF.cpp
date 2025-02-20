#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n = 18;
    
    vector<int> res;
    map<int, int> cnt;
    for (int i = 2; i*i <= n; i++)
    {
        while (n%i == 0)
        {
            res.push_back(i); // store the prime factor
            cnt[i]++; // cnt occurance of each factor
            n /= i;
        }
    }
    if(n > 1) 
    {
        res.push_back(n); 
        cnt[n]++;
    }
    
    print(res);

    cout << nl;

    for(auto [key, val] : cnt) cout << key << " -> " << val << nl; cout << nl;

    return 0;
}