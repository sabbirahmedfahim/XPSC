// https://leetcode.com/problems/subsets-ii/description/
class Solution {
public:
    void f(vector<int> nums, vector<vector<int>> &res, vector<int> v, int idx)
    {
        // if(idx == nums.size())
        res.push_back(v);

        for(int i = idx; i < nums.size(); i++)
        {
            if(i != idx && nums[i] == nums[i - 1]) continue;

            v.push_back(nums[i]);
            f(nums, res, v, i + 1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> v;

        f(nums, res, v, 0);

        return res;
    }
};