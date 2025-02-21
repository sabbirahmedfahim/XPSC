#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int mxN = 30;
vector<int> primeNumbers;
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
        if(prime[i]) primeNumbers.push_back(i);
    }
    
}
void primeFactOfN()
{
    int n = 18;

    vector<int> primeFactors;
    map<int, int> factorCount;
    for (int i = 0; i < primeNumbers.size(); i++)
    {
        while (n%primeNumbers[i] == 0)
        {
            primeFactors.push_back(primeNumbers[i]); // store the prime factors
            factorCount[primeNumbers[i]]++; // count occurance of each factor
            n /= primeNumbers[i];
        }
    }
    if(n != 1) primeFactors.push_back(n);

    print(primeFactors);

    cout << nl;
    
    for(auto [key, val] : factorCount)
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
    
    // print(primeNumbers);

    return 0;
}