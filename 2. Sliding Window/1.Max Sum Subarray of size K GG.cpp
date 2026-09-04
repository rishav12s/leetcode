#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size(),low=0,high=k-1,res=0,sum=0;
        for(int i=low;i<=high;i++)
        {
            sum=sum+arr[i];
        }
        while(high < n)
        {
            res=max(res,sum);
            low++;
            high++;
            if(high==n)
                break;
            sum=sum-arr[low-1];
            sum=sum+arr[high];
        }
        return res;
    } 
};


int main()
{
    int k=2;
    vector <int> v(4);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    int res=sol.maxSubarraySum(v,k);
    cout<<res<<endl;
    return 0;
}