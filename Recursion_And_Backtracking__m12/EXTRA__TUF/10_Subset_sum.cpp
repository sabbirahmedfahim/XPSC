// https://takeuforward.org/plus/dsa/problems/subsets-i
class Solution {
  public:
    void f(vector<int> nums, vector<int> & res, int sum, int idx)
    {
      if(idx == nums.size())
      {
        res.push_back(sum);
        return;
      }

      // nibo
      sum += nums[idx];
      f(nums, res, sum, idx + 1);

      // nibo na
      sum -= nums[idx];
      f(nums, res, sum, idx + 1);
    }
    vector<int> subsetSums(vector<int>& nums) {
      vector<int> res;
      f(nums, res, 0, 0);

      return res;
    }
};