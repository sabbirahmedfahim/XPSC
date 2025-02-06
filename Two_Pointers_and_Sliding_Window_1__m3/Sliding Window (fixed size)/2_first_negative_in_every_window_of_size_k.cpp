#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
vector<int> FirstNegativeInteger(vector<int>& v, int k) 
{
    int l = 0, r = 0; 
    queue<int> q;
    vector<int> ans;

    while (r < v.size())
    {
        if(v[r] < 0) q.push(v[r]);
        if(r-l+1 == k) // hit korse
        {
            if(!q.empty())
            {
                ans.push_back(q.front());
                if(v[l] == q.front()) q.pop();
            }
            else ans.push_back(0);
            l++;
        };
        r++;
    }
    return ans;
}
int main()
{
    iOS

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    vector<int> ans = FirstNegativeInteger(v, k);
    print(ans);

    return 0;
}