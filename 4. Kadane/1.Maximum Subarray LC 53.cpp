#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending=nums[0],ans=nums[0],n=nums.size(),c1,c2;
        for(int i=1;i<n;i++)
        {
            c1=bestending+nums[i];
            c2=nums[i];
            bestending=max(c1,c2);
            ans=max(ans,bestending);
        }
        return ans;
    }
};


int main()
{
    vector <int> v(5);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    cout<<sol.maxSubArray(v)<<endl;
    return 0;
}