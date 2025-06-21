/*"হে আমার ভাই, প্রচুর মানুষ আল্লাহর কিতাবকে পরিত্যেগ করেছে বলে তুমিও তা করো না; যারা আল্লাহর কিতাব অনুযায়ী আমল করে আর সেদিকে মানুষকে আহবান করে-প্রচুর মানুষ তাদেরকে তুচ্ছ মনে করেছে বলে তুমিও তা মনে করো না; বরং তা থেকে বেঁচে থাকো। 
জেনে রাখো, বুদ্ধিমান, বিজ্ঞ ও বিচক্ষণ ব্যক্তি নির্বোধদের সমালোচনাকে পাত্তা দেয় না"।
.
~ ইমাম মুহাম্মাদ আল আমীন আশ শানক্বীতী [রাহ.]
.
[আদ্বওয়াউল বায়ান: ১/৭, দারু ইবনি হাযম, বৈরুত, ২০১৯ ঈ.] p: 941*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std; 
void solve() // implementation
{
    int n, q; cin >> n >> q; vector<ll> sugarQuantity(n), prefSum(n);
    for(auto &data : sugarQuantity) cin >> data;
    sort(sugarQuantity.rbegin(), sugarQuantity.rend());
    prefSum[0] = sugarQuantity[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + sugarQuantity[i];
    // print(sugarQuantity);
    // print(prefSum);

    while (q--)
    {
        ll data; cin >> data;
        int l = 0, r = n-1, mid, ans = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(data <= prefSum[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if(ans == -1) cout << ans << nl;
        else cout << ans+1 << nl;
    }
}
void solve2() // using function
{
    int n, q; cin >> n >> q; vector<ll> sugarQuantity(n), prefSum(n);
    for(auto &data : sugarQuantity) cin >> data;
    sort(sugarQuantity.rbegin(), sugarQuantity.rend());
    prefSum[0] = sugarQuantity[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + sugarQuantity[i];

    while (q--)
    {
        ll data; cin >> data;
        auto lo = lower_bound(all(prefSum), data);
        if(lo == prefSum.end()) cout << -1 << nl;
        else cout << lo - prefSum.begin() + 1 << nl; // +1 for 1-based index
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}
// https://codeforces.com/problemset/problem/1676/E