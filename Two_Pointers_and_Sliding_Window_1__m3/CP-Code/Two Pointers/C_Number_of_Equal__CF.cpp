#include <bits/stdc++.h>
using namespace std;

int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   vector<int> a(n), b(m);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }
   for (int i = 0;i < m;i++) {
      cin >> b[i];
   }

   int l = 0, r = 0; // 2ta pointer
   long long ans = 0;
   while (l < n && r < m) {
      int curr = a[l], cnt1 = 0, cnt2 = 0; // 2ta counter
      while (l < n && a[l] == curr) {
         cnt1++, l++;
      }
      while (r<m && curr>b[r]) {
         r++;
      }
      while (r < m && b[r] == curr) {
         cnt2++, r++;
      }
      ans += (1LL * cnt1 * cnt2); // *** 1LL add korle int variable gula overflow hoy na (typecasting)
   }

   cout << ans << '\n';

   return 0;
}
// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C