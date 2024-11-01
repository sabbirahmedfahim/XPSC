#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
s.push_back('ch') - O(1)
s.pop_back()      - O(1)
s.front()         - O(1)
s.back()          - O(1)
s.clear()         - O(n)  
*/
int main()
{
    FAJR_BOOST()

    string s = "Sabbi";

    // s.push_back()
    s.push_back('r'); 
    print(s);

    cout << nl;

    // s.pop_back()
    s.pop_back(); 
    print(s);

    cout << nl;

    // s.front()
    cout << s.front() << nl;  // s[0] is easier

    cout << nl;

    // s.back()
    cout << s.back() << nl; 

    cout << nl;

    // s.empty()
    if(!s.empty()) cout << "String has characters" << nl; 
    else cout << "String is empty" << nl;

    cout << nl;

    // s.clear()
    s.clear(); // removes all characters from string
    if(!s.empty()) cout << "String has characters" << nl; // s.empty()
    else cout << "String is empty" << nl;

    return 0;
}