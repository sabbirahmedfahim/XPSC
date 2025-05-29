/* 
If an array has n distinct elements, it has n! total permutations (e.g., for n = 3, total = 6).
Recursion & Backtracking simply means- explore all possibilities.  

easy, if u feel complicated --> (GPT ke ask koro)
*/

/*
class Solution {
private:
    void rec(vector<vector<int>> &res, vector<int> &nums, vector<bool> &taken, vector<int> v)
    {
        if(v.size() == nums.size())
        {
            res.push_back(v);
            return;
        }

        for(int i=0; i<taken.size(); i++)
        {
            if(!taken[i])
            {
                v.push_back(nums[i]);
                taken[i] = true;
                rec(res, nums, taken, v);

                v.pop_back();
                taken[i] = false;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) // O(n! * n)
    {
        vector<vector<int> > res;
        vector<bool> taken(nums.size(), false);
        vector<int> v;

        rec(res, nums, taken, v);

        return res;
    }
};
*/

// https://leetcode.com/problems/permutations/description/
// https://github.com/sabbirahmedfahim/ProblemSolving/blob/main/Platforms/permutations_leetcode.cpp