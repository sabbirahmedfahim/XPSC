#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input:
3
5
10 20 40 50 60
2 
45 76
3 
5 78 3
*/
int main()
{
    FAJR_BOOST()

    int row; cin >> row;
    vector<vector<int>> v;
    
    for (int i = 0; i < row; i++)
    {
        int col; cin >> col;
        vector<int> v2;
        for (int j = 0; j < col; j++)
        {
            int data; cin >> data;
            v2.push_back(data);
        }
        // print(v2); 
        v.push_back(v2);
    }

    // print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << nl;
    }
    

    return 0;
}