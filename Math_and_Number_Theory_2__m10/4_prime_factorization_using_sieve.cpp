#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int mxN = 30;
vector<int> allPrimes;
void sieve()
{
    vector<bool> prime(mxN+1, true);
    for (int i = 2; i*i <= mxN; i++)
    {
        if(prime[i])
        {
            for (int j = i+i; j <= mxN; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= mxN; i++)
    {
        if(prime[i]) allPrimes.push_back(i);
    }
    
}
void primeFactOfN()
{
    int n = 18;

    vector<int> res;
    map<int, int> cnt;
    for (int i = 0; i < allPrimes.size(); i++)
    {
        while (n%allPrimes[i] == 0)
        {
            res.push_back(allPrimes[i]); // store the prime factor
            cnt[allPrimes[i]]++; // cnt occurance of each factor
            n /= allPrimes[i];
        }
    }
    if(n != 1) res.push_back(n);

    print(res);

    cout << nl;
    
    for(auto [key, val] : cnt)
    {
        cout << key << " -> " << val << nl; 
    } 
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    sieve();

    primeFactOfN();
    
    // print(allPrimes);

    return 0;
}