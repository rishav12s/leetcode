#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestKSubstr(string &s, int k) {
        int n=s.size(),low=0,high=0,res=INT_MIN,len=0;
        map <char,int> f;
        for(high=0;high<n;high++)
        {
            f[s[high]]++;
            while(f.size()>k)
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                {
                    f.erase(s[low]);
                }
                low++;
            }
            if(f.size()==k)
            {
                len=high-low+1;
                res=max(res,len);
            }
        }
        if(res==INT_MIN)
            return -1;
        return res;
    }         
};


int main()
{
    string s;
    cin>>s;
    int k=2;
    Solution sol;
    int res=sol.longestKSubstr(s,k);
    cout<<res<<endl;
    return 0;
}