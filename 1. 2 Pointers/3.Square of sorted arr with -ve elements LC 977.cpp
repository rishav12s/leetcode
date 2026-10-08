#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> neg;
        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        if (pos.size() == 0)
        {
            for (int i = 0; i < n; i++)
            {
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin(), neg.end());
            return neg;
        }
        if (neg.size() == 0)
        {
            for (int i = 0; i < n; i++)
            {
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }
        int i = 0, j = 0, k = 0;
        for (int a = 0; a < pos.size(); a++)
        {
            pos[a] = pos[a] * pos[a];
        }
        for (int a = 0; a < neg.size(); a++)
        {
            neg[a] = neg[a] * neg[a];
        }
        reverse(neg.begin(), neg.end());
        while (i < pos.size() && j < neg.size())
        {
            if (pos[i] <= neg[j])
            {
                nums[k] = pos[i];
                k++;
                i++;
            }
            else
            {
                nums[k] = neg[j];
                k++;
                j++;
            }
        }
        while (i < pos.size())
        {
            nums[k] = pos[i];
            k++;
            i++;
        }
        while (j < neg.size())
        {
            nums[k] = neg[j];
            k++;
            j++;
        }
        return nums;
    }
};

int main()
{
    vector<int> v(4);
    for (int &x : v)
    {
        cin >> x;
    }
    Solution sol;
    v = sol.sortedSquares(v);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}