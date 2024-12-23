#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input:
Munna 765 99.56
Sabbir 234 86.43
Fahim 654 67.86
*/
class cmp
{
public:
    bool operator()(tuple<string, int, float> &Student1, tuple<string, int, float> &Students2)
    {
        return get<2>(Student1) > get<2>(Students2); // Sort by marks
    }
};
int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    tuple<string, int, float> students[n]; // name, roll, marks
    for (int i = 0; i < n; i++)
    {
        string name; int roll; float marks;
        cin >> name >> roll >> marks;
        students[i] = {name, roll, marks};
    }
    sort(students, students+n, cmp());
    for (int i = 0; i < n; i++)
    {
        auto [name, roll, marks] = students[i];
        cout << name << " " << roll << " " << marks << nl;
    }

    return 0;
}