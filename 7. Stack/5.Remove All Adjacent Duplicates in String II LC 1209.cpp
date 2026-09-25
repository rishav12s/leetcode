#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack <pair <char,int>> st;
        int n=s.size();
        char c;
        pair<char,int> p;
        for(int i=0;i<n;i++)
        {
            c=s[i];
            if(st.empty())
            {
                st.push({c,1});
                continue;
            }
            if(st.top().first != c)
            {
                st.push({c,1});
                continue;
            }
            //st.top().first = c
            if(st.top().second < (k-1))
            {
                p=st.top();
                st.pop();
                st.push({p.first,p.second+1});
                continue;
            }
            //st.top().second = k-1
            st.pop();
        }
        string res="";
        while(!st.empty())
        {
            p=st.top();
            st.pop();
            while(p.second--)
            {
                res.push_back(p.first);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};


int main()
{
    Solution sol;
    return 0;
}