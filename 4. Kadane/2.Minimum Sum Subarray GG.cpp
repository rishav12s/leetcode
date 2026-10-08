#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubarraySum(vector<int> &arr)
    {
        int bestending = arr[0], ans = arr[0], n = arr.size(), c1, c2;
        for (int i = 1; i < n; i++)
        {
            c1 = bestending + arr[i];
            c2 = arr[i];
            bestending = min(c1, c2);
            ans = min(ans, bestending);
        }
        return ans;
    }
};

int main()
{
    vector<int> v(7);
    for (int &x : v)
    {
        cin >> x;
    }
    Solution sol;
    cout << sol.minSubarraySum(v) << endl;
    return 0;
}