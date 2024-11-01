#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    vector<int> v = {10, 30, 40, 50, 50};

    auto mxEle = max_element(v.begin(), v.end());
    int mxElePos = mxEle - v.begin();
    cout << mxElePos << nl;
    // Output: Outputs the position of the first occurrence of the maximum element, scanning from left to right

    return 0;
}