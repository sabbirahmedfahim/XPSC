/*
class Solution 
{
  public:
    vector<int> firstNegInt(vector<int>& v, int k) 
    {
        // write code here
      int l = 0, r = 0; 
      queue<int> q;
      vector<int> ans;

      while (r < v.size())
      {
        if(v[r] < 0) q.push(v[r]);
        if(r-l+1 == k) // window hit korse
        {
            if(!q.empty())
            {
                ans.push_back(q.front());
                if(v[l] == q.front()) q.pop();
            }
            else ans.push_back(0);
            l++;
        }
        r++;
    }
    return ans;
    }
};
*/
// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1