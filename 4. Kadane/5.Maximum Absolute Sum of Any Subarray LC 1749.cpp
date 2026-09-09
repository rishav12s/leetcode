#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size(),maxsum=nums[0],minsum=nums[0],maxend=nums[0],minend=nums[0],res=0;
        for(int i=1;i<n;i++)
        {
            maxend=max(nums[i],maxend+nums[i]);
            minend=min(nums[i],minend+nums[i]);
            maxsum=max(maxsum,maxend);
            minsum=min(minsum,minend);
        }    
        res=max(abs(maxsum),abs(minsum));
        return res;
    }
};


int main()
{
    vector <int> v(5);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    cout<<sol.maxAbsoluteSum(v)<<endl;
    return 0;
}