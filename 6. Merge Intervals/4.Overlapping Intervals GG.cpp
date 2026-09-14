#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isIntersect(vector<vector<int>> intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size(),start1=intervals[0][0],end1=intervals[0][1],start2,end2;
        for(int i=1;i<n;i++)
        {
            start2=intervals[i][0];
            end2=intervals[i][1];
            if(end1>=start2)
                return true;
            start1=start2;
            end1=end2;
        }
        return false;
    }
};


int main()
{
    Solution sol;
    return 0;
}