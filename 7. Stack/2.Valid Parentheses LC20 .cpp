#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> items;
        int i, n = s.size();
        for (i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') // opening
            {
                items.push(s[i]);
                continue;
            }
            // closing conditions
            if (items.empty())
                return false;
            if (s[i] == ')' && items.top() == '(')
            {
                items.pop();
                continue;
            }
            else if (s[i] == '}' && items.top() == '{')
            {
                items.pop();
                continue;
            }
            else if (s[i] == ']' && items.top() == '[')
            {
                items.pop();
                continue;
            }
            else
                return false;
        }
        if (!items.empty())
            return false;
        return true;
    }
};

int main()
{
    Solution sol;
    return 0;
}