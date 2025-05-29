#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
After the recursive calls finish, values are printed while coming back from the call stack.
This is not true backtracking, but it's sometimes called that to explain the return phase.
*/
void rec(int n)
{
    if(n == 0) return;

    rec(n - 1);
    cout << n << " ";
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n = 3;
    rec(n);

    return 0;
}