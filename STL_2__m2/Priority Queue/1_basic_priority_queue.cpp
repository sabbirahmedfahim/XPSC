#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    priority_queue<int> pq; // Max Heap

    // push
    pq.push(5);
    pq.push(2);
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(2);

    // top
    cout << pq.top() << nl;
    pq.pop();
    cout << pq.top() << nl;
    pq.pop();
    cout << pq.top() << nl;

    cout << nl;

    // size
    cout << pq.size() << nl;

    cout << nl;

    // is empty
    if(!pq.empty()) cout << "pq is not empty" << nl;

    cout << nl;

    // print
    while (!pq.empty())
    {
        cout << pq.top() << nl;
        pq.pop();
    }

    return 0;
}