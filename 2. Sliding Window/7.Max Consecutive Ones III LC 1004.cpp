#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),low=0,high=0,res=0,len=0,zero_cnt=0;
        int f[2]={0};
        for(high=0;high<n;high++)
        {
            f[nums[high]]++;
            zero_cnt=f[0];
            while(zero_cnt > k)
            {
                f[nums[low]]--;
                low++;
                zero_cnt=f[0];
            }
            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};


int main()
{
    int k;
    cin>>k;
    vector <int> v(19);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    int res=sol.longestOnes(v,k);
    cout<<res<<endl;
    return 0;
}