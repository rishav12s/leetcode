#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int res=0,r=0,i=0,j=0;
        int n=start.size();
        while(i<n)
        {
            if(start[i]<end[j])
            {
                r++;
                res=max(res,r);
                i++;
            }
            else
            {
                r--;
                j++;
            }
        }
        return res;

    }
};



int main()
{
    Solution sol;
    return 0;
}