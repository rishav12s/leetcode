#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int find(int arr[]) // Find max count of alphabet from array f of size 256
    {
        int res = *max_element(arr, arr + 256);
        return res;
    }
    int characterReplacement(string s, int k)
    {
        int n = s.size(), low = 0, high = 0, len = 0, max_cnt = 0, diff = 0, res = 0;
        int f[256] = {0};
        for (high = 0; high < n; high++)
        {
            f[s[high]]++; // Increase count of alphabet at high and include it in window
            len = high - low + 1;
            max_cnt = find(f);
            diff = len - max_cnt;
            while (diff > k)
            {
                f[s[low]]--;
                low++; // no need to use erase() since f is array and not hashmap
                len = high - low + 1;
                max_cnt = find(f);
                len = high - low + 1;
                diff = len - max_cnt;
            }
            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    Solution sol;
    int res = sol.characterReplacement(s, k);
    cout << res << endl;
    return 0;
}