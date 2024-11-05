#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    // map, set combination
    map<int, set<int> > mp;

    set<int> s1;
    s1.insert(2);
    s1.insert(5);
    s1.insert(2);
    s1.insert(2);
    s1.insert(2);

    set<int> s2;
    s2.insert(9);
    s2.insert(5);
    s2.insert(4);

    set<int> s3;
    s3.insert(12);
    s3.insert(1);
    s3.insert(6);
    s3.insert(7);

    mp[5] = s1;
    mp[67] = s2;
    mp[8] = s3;

    // print
    for(auto [key, val] : mp)
    {
        cout << key << " -> ";
        for(auto data : val) cout << data << " ";
        cout << nl;
    }

    cout << nl;

    // lower bound
    int x = 6, y = 8;
    auto LB1 = mp.lower_bound(x); // LB1 -> lower bound 1
    if(LB1 != mp.end())
    {
        int ans = LB1->first;
        auto LB2 = mp[ans].lower_bound(y);

        if(LB2 != mp[ans].end())
        {
            cout << *LB2 << nl;
        }
        else cout << "not found" << nl;
    }
    
    return 0;
}