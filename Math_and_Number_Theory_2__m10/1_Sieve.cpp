#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
Do you know? The number of times each number is marked in the Sieve of Eratosthenes 
approximates O(n log log N) using the Harmonic series of prime numbers.
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n = 50; 
    // pre-calculation
    vector<bool> prime(n, true);
    for (int i = 2; i*i <= n; i++) // O(log(logN))
    {
        if(prime[i])
        {
            for (int j = i+i; j <= n; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    // generate prime numbers
    for (int i = 2; i <= n; i++)
    {
        if(prime[i]) cout << i << " ";
    }
    cout << nl;
    

    return 0;
}