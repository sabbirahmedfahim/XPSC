#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
bool isPrimeNaive(int n) // O(N) [naive]
{
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0) return false; 
    }
    return true;
}
bool isPrime(int n) // O(logN)
{
    if(n == 1) return false; // 1 is not a prime number, it's a special number
    for (int i = 2; i*i <= n; i++) // 1 theke korle n ta include hoto, akon n also excluded hahaha
    {
        if(n%i == 0) return false; // extra kore (n/i) korar dorkar nai [think why]
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; 
    // cin >> n;
    n = 4;

    // naive
    if(isPrimeNaive(n)) cout << n << " is a Prime Number" << nl;
    else cout << n << " is not a Prime Number" << nl;

    cout << nl; 

    // optimized
    if(isPrime(n)) cout << n << " is a Prime Number" << nl;
    else cout << n << " is not a Prime Number" << nl;

    return 0;
}