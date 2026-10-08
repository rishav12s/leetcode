#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int negmod(int n, int k)
    {
        int res = -(abs(n) % k) + k;
        return res % k;
    }
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();
        // initialize hashmap
        unordered_map<int, int> f;
        int rem, sum = 0, freq, res = 0;
        f[0] = 1;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum < 0)
            {
                rem = negmod(sum, k);
            }
            else
            {
                rem = sum % k;
            }
            freq = f[rem];
            res = res + freq;
            f[rem]++;
        }
        return res;
    }
};

int main()
{
    int k;
    cin >> k;
    vector<int> v(1);
    for (int &x : v)
    {
        cin >> x;
    }
    Solution sol;
    cout << sol.subarraysDivByK(v, k) << endl;
    return 0;
}