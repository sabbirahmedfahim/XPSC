#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
basically amra ekta set er subset gulu ke diye prottekbar nibo naki nibo na method ta follow korbo. if the elements of
a set is n then the subset will be 2^n(bhai dorais na, class six er math), and amra ei 2^n ke n times operations korbo,
AKA nibo naki nibo na method follow korbo then complexity hobe `2^n * n` which is a very bad time complexity
*/      
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // let's say n is 3 or whatever
    
    for (int mask = 0; mask < (1 << n); mask++) // O(2^n) * O(n) => O(2^n * n) -> bad time complexity
    { // (1 << n) kemne kaj kore eta 1000% clear hote hobe. For example, (1 << n) is equivalent to 2^n. The outer loop runs 2^n times.
        cout << mask << " -> ";
        for (int k = 0; k < n; k++) // O(n) -> n ta bit each time dekhbo, etna mehenga nehi
        {
            // `mask` represents a subset in binary form.
            // mask kothin kicu na, 2^i er value. and amra 2^i decimal value tar bit gula check dicchi(on/off)
            // eta korar reason holo subset er combination gulu ber kora. 
            if ((mask >> k) & 1) cout << 1 << " "; // If the k-th bit is set 1, include the element in the subset.
            else cout << 0 << " "; // Otherwise, exclude the element
        }
        cout << nl;
    }

    return 0;
}