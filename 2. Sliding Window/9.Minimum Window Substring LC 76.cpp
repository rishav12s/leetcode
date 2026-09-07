#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check_freq(int have[],int needed[])
    {
        for(int i=0;i<256;i++)
        {
            if(have[i]<needed[i])
            {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int t_count[256]={0};
        int s_count[256]={0};
        int n=s.size(),low=0,high=0,res=INT_MAX,len=0,start=0;
        for(int i=0;i<t.size();i++)
        {
            t_count[t[i]]++;
        }
        for(high=0;high<n;high++)
        {
            s_count[s[high]]++;
            while(check_freq(s_count,t_count))
            {
                len=high-low+1;
                if(res>len)
                {
                    res=len;
                    start=low;
                }
                s_count[s[low]]--;
                low++;
            }

        }
        if(res==INT_MAX)
            return "";
        return s.substr(start,res);
    }
};


int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    Solution sol;
    cout<<sol.minWindow(s,t)<<endl;
    return 0;
}