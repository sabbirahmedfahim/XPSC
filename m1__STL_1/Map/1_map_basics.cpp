#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    map<int,int> mp;

    // insert method-1
    cout << "insert method-1" << nl;
    mp.insert({10, 230}); // O(logN)
    cout << mp[10] << nl;

    cout << nl;

    // insert method-2
    cout << "insert method-2" << nl;
    mp[2] = 343; // O(logN)
    cout << mp[2] << nl;

    cout << nl;

    // Key uniqueness
    cout << "uniqueness" << nl;
    mp[2] = 65; // Update the value 363 to 65 for the key 2 -> O(logN)
    cout << mp[2] << nl; 
    
    cout << nl;

    // inserting some values
    mp.insert({55, 76});
    mp.insert({8, 3});
    mp.insert({767, 4});

    cout << nl;

    // traverse method-1
    cout << "traverse method-1" << nl;
    cout << "Key -> Value" << nl;
    for(auto data : mp) 
    {
        cout << data.first << " -> " << data.second << nl;
    }

    cout << nl;

    // traverse method-2
    cout << "traverse method-2" << nl;
    cout << "Key -> Value" << nl;
    for(auto [key, val] : mp) cout << key << " -> " << val << nl;
    /*
    The traversal result shows that the map is sorted based on keys.
    */

    cout << nl;

    // find operation -> O(logN)
    cout << "Find" << nl;
    auto it2 = mp.find(100);
    if(it2 == mp.end()) cout << "key is not found" << nl; // if we do check, there will be a runtime error
    else cout << it2->first << " key te ache : " << it2->second << nl;

    cout << nl;

    // erase operation -> O(logN)
    cout << "Erase" << nl;
    /*
    i. Erasing from the map is based on keys only. 
    ii. We cannot erase a value that does not exist in the map. That's why check first -> mp.find(key)
    */
    // mp.erase(2);
    auto it3 = mp.find(2);
    if(it3 != mp.end()) mp.erase(2);
    else cout << "key not found, unable to delete" << nl;

    for(auto [key, data] : mp) cout << key << " -> " << data << nl;


    cout << nl;

    // size of the map -> return the number of key's in the map
    cout << "Size" << nl;
    cout << mp.size() << nl;


    return 0;
} 