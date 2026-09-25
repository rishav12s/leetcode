#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int res=0;
        int n=s.size();
        unordered_map <char,int> have;
        for(int i=0;i<n;i++)
        {
            have[s[i]]++;
        }
        bool od=false;
        int val;
        for(auto x:have)
        {
            val=x.second;
            if(val%2==0)
            {
                res+=val;
            }
            else
            {
                od=true;
            }
        }
        
        if(od==false)
        {
            return res;
        }
        else {
            for(auto x:have)
            {
                val=x.second;
                if(val%2==1)
                {
                    res+=val-1;
                }
            }
        }
        return res+1;
    }
};


int main()
{
    Solution sol;
    return 0;
}