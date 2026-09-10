#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),left=0,right=0,sum=0,i;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        for(i=0;i<n;i++)
        {
            right=sum-left-nums[i];
            if(right==left)
                return i;
            left+=nums[i];
        }
        return -1;
    }
};


int main()
{
    int n=3;
    vector <int> v(n);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    cout<<sol.pivotIndex(v)<<endl;
    return 0;
}