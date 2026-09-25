#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack <int> ans;
        vector <int> res(n);
        res[n-1]=0;
        ans.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!ans.empty() && temperatures[ans.top()]<=temperatures[i])
            {
                ans.pop();
            }
            if(ans.empty())
            {
                res[i]=0;
            }
            else
            {
                res[i]=ans.top()-i;//no of days till warmer temperature found ie difference of indexes
            }
            ans.push(i);
        }
        return res;      
    }
};

int main()
{
    Solution sol;
    return 0;
}