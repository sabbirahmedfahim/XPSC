#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int mxN = 50;
vector<vector<int>> divisors(mxN);
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    for (int i = 1; i < mxN; i++) // not i <= mxN
    { 
        for (int j = i; j < mxN; j+=i) // j = i *** 
        {
            divisors[j].push_back(i);
        }
    }

    for (int i = 1; i <= 30; i++)
    {
        cout << i << " -> ";
        print(divisors[i]);
    }

    

    return 0;
}