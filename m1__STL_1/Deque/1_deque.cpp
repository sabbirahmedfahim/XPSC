#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    deque<int> dq;
    dq.push_back(10); // insert at tail
    dq.push_back(30);
    dq.push_back(40);
    print(dq);

    cout << nl;
    
    dq.pop_back(); // delete at tail
    print(dq);

    cout << nl;

    dq.push_front(90); // insert at head
    dq.push_front(100); 
    print(dq);

    cout << nl;

    dq.pop_front(); // delete at head
    print(dq);

    return 0;
}