#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int res_sum=0,max_diff=INT_MAX,i=0,left,right,n,diff,s;
        n=nums.size();
        for(i=0;i<n-2;i++) 
        {
            left=i+1;
            right=n-1;
            while(left < right) 
            {
                s=nums[i]+nums[left]+nums[right];
                diff=abs(s-target);
                if(diff < max_diff)
                {
                    max_diff=diff;
                    res_sum=s;
                }
                if(s==target) 
                {
                    res_sum=s;
                    return res_sum;
                }
                else if(s<target)
                {
                    left++;
                }
                else if(s>target)
                {
                    right--;
                }
            }

        }
        return res_sum;
    }
};


int main()
{
    vector<int> v(4);
    int target = 1;
    for(int &x:v) {
        cin >> x;
    }
    Solution sol;
    int s=sol.threeSumClosest(v,target);
    cout<<s<<endl;
    return 0;
}