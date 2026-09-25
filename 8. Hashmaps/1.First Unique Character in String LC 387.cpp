#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int firstUniqChar(string s) {
    {
        int n=s.size();
        unordered_map <char,int> f;
        for(int i=0;i<n;i++)
        {
            f[s[i]]++;
        }
        int freq;
        for(int i=0;i<n;i++)
        {
            if(f[s[i]]==1)
                return i;
        }
        return -1;
    }
}
};



int main()
{
    Solution sol;
    return 0;
}