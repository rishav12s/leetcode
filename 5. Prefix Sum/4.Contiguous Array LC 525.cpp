#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int n = nums.size(), i, zero = 0, one = 0, diff, res = 0;
        unordered_map<int, int> f;
        for (i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                zero++;
            else
                one++;
            diff = zero - one;
            if (diff == 0)
            {
                res = max(res, i + 1);
                continue;
            }
            if (f.find(diff) == f.end()) // diff not in hashmap
            {
                f[diff] = i; // store in hashmap with first index that diff came
            }
            else
            {
                res = max(res, i - f[diff]);
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    return 0;
}