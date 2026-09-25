#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        unordered_map <char,int> have;
        unordered_map <char,int> need;
        char c;
        for(int i=0;i<m;i++)
        {
            c=magazine[i];
            have[c]++;
        }
        for(int i=0;i<n;i++)
        {
            c=ransomNote[i];
            need[c]++;
        }
        for(int i=0;i<n;i++)
        {
            c=ransomNote[i];
            if(have[c]<need[c])
                return false;
        }
        return true;
    }
};