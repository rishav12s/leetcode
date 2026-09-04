#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),low=0,high=0,k=0,len=0,res=INT_MIN;
        unordered_map <char,int> f;
        for(high=0;high<n;high++)
        {
            f[s[high]]++;
            k=high-low+1; //current window size
            while(f.size()<k) //there is duplicates in current window
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                {
                    f.erase(s[low]);
                }
                low++;
                k=high-low+1; //k decrease when we shrink window so recalculate
            }
            len=high-low+1;
            res=max(res,len);
        }
        if(res==INT_MIN)
            return 0;
        return res;
    }
};


int main()
{
    string s;
    cin>>s;
    Solution sol;
    int res=sol.lengthOfLongestSubstring(s);
    cout<<res<<endl;
    return 0;
}