#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    vector<int> v1; // normal vector

    vector<vector<int> > v2; // 2D vector

    vector<set<int> > v3; // aste aste useful hobe
    vector<multiset<int> > v4; // aste aste useful hobe

    // map, vector combination
    map<int, int> mp1; // normal map

    map<vector<int>, int> mp2; // abnormal map :p
    vector<int> a;
    a.push_back(10);
    a.push_back(30);
    a.push_back(70);
    mp2[a] = 5;
    for(auto [key, val] : mp2) 
    {
        for(auto data : key) cout << data << " "; // print key's
        cout << nl << val << nl; // key's
    }

    cout << nl;

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
    s3.insert(8);

    mp[5] = s1;
    mp[67] = s2;
    mp[8] = s3;

    for(auto [key, val] : mp)
    {
        cout << key << " -> ";
        for(auto data : val) cout << data << " ";
        cout << nl;
    }
    

    return 0;
}