#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),maxending=nums[0],minending=nums[0],ans=nums[0],c1,c2,c3;
        for(int i=1;i<n;i++)
        {
            c1=nums[i];
            c2=maxending*nums[i];
            c3=minending*nums[i];
            maxending=max(c1,max(c2,c3));
            minending=min(c1,min(c2,c3));
            ans=max(ans,max(maxending,minending));
        }
        return ans;
    }
};


int main()
{
    vector <int> v(3);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    cout<<sol.maxProduct(v)<<endl;
    return 0;
}