#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left, right, sum = 0, i;
        vector<vector<int>> trio;
        for (i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            left = i + 1;
            right = n - 1;
            sum = -1 * nums[i];
            while (left < right)
            {
                if (nums[left] + nums[right] == sum)
                {
                    trio.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1])
                    {
                        right--;
                    }
                }
                else if (left < n && nums[left] + nums[right] < sum)
                {
                    left++;
                }
                else if (right >= 0 && nums[left] + nums[right] > sum)
                {
                    right--;
                }
            }
        }
        return trio;
    }
};
