#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n = 10;
    // cin >> n; 
    vector<ll> v = {2, 4, 6, 6, 7, 8, 8, 8, 10, 12};
    vector<ll> queries = {8, 6, 7, 12, 5};

    for(auto key : queries) // O(q*logN)
    {
        int l = 0, r = n-1, mid, firstOcc = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(key == v[mid])
            {
                firstOcc = mid;
                r = mid - 1; // shift search space to left for the first occurrence
            }
            else if(key < v[mid]) r = mid - 1;
            else l = mid + 1;
        }
        if(firstOcc == -1) cout << "Not found" << nl;
        else cout << firstOcc << nl;
    }

    return 0;
}