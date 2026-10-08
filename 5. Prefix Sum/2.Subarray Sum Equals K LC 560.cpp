#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        // hashmap initialize with 0 ie sum of empty array
        unordered_map<int, int> f;
        f[0] = 1;
        int n = nums.size(), sum = 0, ques, freq, res = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            ques = sum - k;
            freq = f[ques];
            res = res + freq;
            f[sum]++;
        }
        return res;
    }
};

int main()
{
    int k;
    cin >> k;
    vector<int> v(3);
    for (int &x : v)
    {
        cin >> x;
    }
    Solution sol;
    cout << sol.subarraySum(v, k) << endl;
    return 0;
}