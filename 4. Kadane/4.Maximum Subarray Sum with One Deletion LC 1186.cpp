#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int v1,v2,v3,v4;
        int n=arr.size(),nopower=arr[0],res=arr[0],power=0;
        for(int i=1;i<n;i++)
        {
            //no power or no delete
            v1=arr[i];
            v2=nopower+arr[i];
            //power or one delete
            v3=power+arr[i];
            v4=nopower;
            res=max(res,max({v1,v2,v3,v4}));
            nopower=max(v1,v2);
            power=max(v3,v4);
        }
        return res;    
    }
};


int main()
{
    vector <int> v(4);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    cout<<sol.maximumSum(v)<<endl;
    return 0;
}