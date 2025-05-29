/*
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) 
    {
        // code here
      long long sum = 0, ans = 0;
    int l = 0, r = 0;

    while (r < arr.size())
    {
        sum += arr[r];
        if(r-l+1 == k) // window te hit korse
        {
            ans = max(ans, sum);
            sum -= arr[l];
            l++; r++;
        }
        else // window hit kore nai
        {
            r++;
        }
    }

    return ans;
    }
};
*/
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1