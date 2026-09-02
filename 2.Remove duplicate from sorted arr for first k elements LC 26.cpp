#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j=0,k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[j]!=nums[i]) {
                nums[j+1]=nums[i];
                j=j+1;
                k++;
            }
        }
        return k;
    }
};

int main()
{
    int n = 5;
    vector<int> v(n);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    Solution sol;
    int k = sol.removeDuplicates(v);
    cout << k << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}