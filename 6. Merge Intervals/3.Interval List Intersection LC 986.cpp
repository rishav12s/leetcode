#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n=firstList.size(),m=secondList.size(),i=0,j=0,start1,end1,start2,end2,s,e;
        vector<vector <int>> res;
        while(i<n && j<m)
        {
            start1=firstList[i][0];
            end1=firstList[i][1];
            start2=secondList[j][0];
            end2=secondList[j][1];
            if(start1<=start2) //normal case
            {
                if(end1>=start2) //intersect
                {
                    s=max(start1,start2);
                    e=min(end1,end2);
                    res.push_back({s,e});
                }
            }
            else //reverse case
            {
                if(end2>=start1) //intersect
                {
                    s=max(start1,start2);
                    e=min(end1,end2);
                    res.push_back({s,e});
                }
            }
            if(end1<=end2)
                i++;
            else
                j++;
        }
        return res;
    }
};

int main()
{
    Solution sol;
    return 0;
}