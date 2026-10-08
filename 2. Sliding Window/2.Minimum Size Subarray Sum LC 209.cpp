#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size(), low = 0, high = 0, sum = 0, res = INT_MAX, len = 0;
        while (high < n)
        {
            sum = sum + nums[high];
            while (sum >= target)
            {
                len = high - low + 1;
                res = min(res, len);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        if (res == INT_MAX)
            return 0;
        return res;
    }
};

int main()
{
    vector<int> v(8);
    for (int &x : v)
    {
        cin >> x;
    }
    int target = 11;
    Solution sol;
    int res = sol.minSubArrayLen(target, v);
    cout << res << endl;
    return 0;
}