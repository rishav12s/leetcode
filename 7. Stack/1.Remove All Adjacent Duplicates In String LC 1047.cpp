#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> ans;
        int n=s.size();
        string res;
        for(int i=0;i<n;i++)
        {
            if(ans.empty()) {
                ans.push(s[i]);
                continue;
            }
            if(s[i]==ans.top())
            {
                ans.pop();
                continue;
            }
            ans.push(s[i]);
        }
        while(!ans.empty())
        {
            res.push_back(ans.top());
            ans.pop();
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