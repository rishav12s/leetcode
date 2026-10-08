#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int n = intervals.size(), start1 = intervals[0][0], end1 = intervals[0][1], start2, end2;
        for (int i = 1; i < n; i++)
        {
            start2 = intervals[i][0];
            end2 = intervals[i][1];
            if (end1 >= start2) // merge
            {
                start1 = start1;
                end1 = max(end1, end2);
                continue;
            }
            res.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
        }
        res.push_back({start1, end1});
        return res;
    }
};

int main()
{
    vector<vector<int>> v = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}};
    Solution sol;
    vector<vector<int>> ans = sol.merge(v);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}