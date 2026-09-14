#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergeintervals(vector<vector<int>> &a)
    {
        vector<vector<int>> res;
        int start1 = a[0][0], end1 = a[0][1], start2, end2;
        int n = a.size();
        for (int i = 1; i < n; i++)
        {
            start2 = a[i][0];
            end2 = a[i][1];
            if (end1 >= start2)
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
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> res;
        int i=0;
        int n = intervals.size();
        bool insert=false;
        int start;
        //insert in sorted intervals
        while(i<n)
        {
            start=intervals[i][0];
            if(insert==false && start>=newInterval[0])
            {
                res.push_back(newInterval);
                insert=true;
            }
            res.push_back(intervals[i++]);
        }
        if(insert==false) //insert at end of intervals as newInterval is largest
            res.push_back(newInterval);
    
        res = mergeintervals(res);
        return res;
    }
};

int main()
{
    vector<vector<int>> v = {
        {1, 5}};
    vector<int> newI = {{2, 3}};
    Solution sol;
    vector<vector<int>> ans = sol.insert(v, newI);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    return 0;
}