class Solution {
public:
    void f(vector<vector<int>> &res, vector<int> nums, vector<bool> taken, vector<int> v, int idx)
    {
        if(v.size() == nums.size())
        {
            res.push_back(v);
            return;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(taken[i]) continue;

            v.push_back(nums[i]);
            taken[i] = true;
            f(res, nums, taken, v, i + 1);

            v.pop_back();
            taken[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<bool> taken(nums.size(), false);
        vector<int> v;

        f(res, nums, taken, v, 0);

        return res;
    }
};