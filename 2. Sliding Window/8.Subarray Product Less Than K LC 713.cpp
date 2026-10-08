#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int n = nums.size(), low = 0, high = 0, prod = 1, c = 0;
        for (high = 0; high < n; high++)
        {
            if (k == 0)
            {
                return c;
            }
            prod = prod * nums[high];
            while (prod >= k && low <= high)
            {
                prod = prod / nums[low];
                low++;
            }
            c = c + high - low + 1;
        }
        return c;
    }
};

int main()
{
    int k;
    cin >> k;
    vector<int> v(4);
    for (int &x : v)
    {
        cin >> x;
    }
    Solution sol;
    int res = sol.numSubarrayProductLessThanK(v, k);
    cout << res << endl;
    return 0;
}