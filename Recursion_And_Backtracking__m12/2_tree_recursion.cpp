#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
guesswork, let n = 3, and simulate the recursion
*/
void rec(int n) // O(2ⁿ - 1) --> O(2ⁿ)
{
    if(n == 0) return;

    cout << n << " ";
    rec(n - 1);
    rec(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n = 3;
    /* Space complexity is O(n) due to the recursion call stack */
    rec(n);

    return 0;
}