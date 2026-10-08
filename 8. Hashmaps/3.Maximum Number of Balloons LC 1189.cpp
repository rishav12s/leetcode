#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        int n = text.size();
        string bal = "balloon";
        int m = bal.size();
        unordered_map<char, int> have;
        unordered_map<char, int> need;
        char c;
        for (int i = 0; i < m; i++)
        {
            c = bal[i];
            need[c]++;
        }
        for (int i = 0; i < n; i++)
        {
            c = text[i];
            // error coz contains was introduced in newer vers of cpp
            if (bal.contains(c))
            {
                have[c]++;
            }
        }
        int freq;
        int mini = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            c = bal[i];
            mini = min(mini, have[c] / need[c]);
        }
        return mini;
    }
};

int main()
{
    Solution sol;
    return 0;
}