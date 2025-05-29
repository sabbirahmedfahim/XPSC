/*
class Solution {
public:
    bool isPalindrome(string &s, int l, int r)
    {
        while(l <= r)
        {
            if(s[l] != s[r]) return false;
            l++, r--;
        }
        return true;
    }
    void fun(vector<vector<string>> &res, vector<string> v, string &s, int idx)
    {
        if(idx == s.size())
        {
            res.push_back(v);
            return;
        }

        for(int i = idx; i < s.size(); i++)
        {
            if(isPalindrome(s, idx, i))
            {
                v.push_back(s.substr(idx, i - idx + 1));
                fun(res, v, s, i + 1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> v;
        int n = s.size();

        fun(res, v, s, 0);

        return res;
    }
};
*/
// https://leetcode.com/problems/palindrome-partitioning/description/