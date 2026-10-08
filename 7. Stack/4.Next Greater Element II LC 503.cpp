#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> ans;
        vector<int> res(n);
        for (int i = n - 2; i >= 0; i--)
        {
            ans.push(nums[i]);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!ans.empty() && ans.top() <= nums[i])
            {
                ans.pop();
            }
            if (ans.empty())
            {
                res[i] = -1;
            }
            else
            {
                res[i] = ans.top();
            }
            ans.push(nums[i]);
        }
        return res;
    }
};

int main()
{
    vector<int> v(5);
    for (int &x : v)
    {
        cin >> x;
    }
    Solution sol;
    vector<int> res = sol.nextGreaterElements(v);
    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}