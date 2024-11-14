#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input-1:
4 2
100 200 300 400

input-2:
9 5
9479 488 2374 1583 5863 7811 6916 1685 3960
*/
long long maximum_sum_subarray(vector<int>& arr, int k) {
    long long sum = 0, ans = 0;
    int l = 0, r = 0;

    while (r < arr.size())
    {
        sum += arr[r];
        if(r-l+1 == k) // window te hit korse
        {
            ans = max(ans, sum);
            sum -= arr[l];
            l++; r++;
        }
        else // window hit kore nai
        {
            r++;
        }
    }

    return ans;
}
int main()
{
    iOS

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    // print(v);

    cout << maximum_sum_subarray(v, k) << nl;

    return 0;
}
