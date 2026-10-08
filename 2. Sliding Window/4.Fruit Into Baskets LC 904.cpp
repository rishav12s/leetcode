#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        int n = fruits.size(), low = 0, high = 0, res = INT_MIN, len = 0;
        unordered_map<int, int> f;
        for (high = 0; high < n; high++)
        {
            f[fruits[high]]++;
            while (f.size() > 2)
            {
                f[fruits[low]]--;
                if (f[fruits[low]] == 0)
                {
                    f.erase(fruits[low]);
                }
                low++;
            }
            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};

int main()
{
    int n = 5;
    vector<int> v(n);
    for (int &x : v)
    {
        cin >> x;
    }
    Solution sol;
    int res = sol.totalFruit(v);
    cout << res << endl;
    return 0;
}