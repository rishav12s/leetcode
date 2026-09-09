#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxend=nums[0],maxsum=nums[0];
        //kadane normal max sum
        for(int i=1;i<n;i++)
        {
            maxend=max(nums[i],maxend+nums[i]);
            maxsum=max(maxsum,maxend);
        }
        //kadane normal min sum
        int minend=nums[0],minsum=nums[0];
        for(int i=1;i<n;i++)
        {
            minend=min(nums[i],minend+nums[i]);
            minsum=min(minsum,minend);
        }
        //sum of whole array
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        //circular array max sum case
        int circularmax; 
        if(sum==minsum)
        {
            circularmax=minsum;
        }
        else {
            circularmax=sum-minsum;
        }
        int res=max(maxsum,circularmax); //max of two cases
        return res; 
    }
};


int main()
{
    vector <int> v(3);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    cout<<sol.maxSubarraySumCircular(v)<<endl;
    return 0;
}