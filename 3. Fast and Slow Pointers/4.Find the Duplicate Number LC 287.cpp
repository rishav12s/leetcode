#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int findDuplicate(vector<int>& nums) {
        int slow=0,fast=0;
        while(true)
        {
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
            if(slow==fast)
            {
                slow=0;
                while(slow!=fast)
                {
                    slow=nums[slow];
                    fast=nums[fast];
                }
                return slow;
            }
        }
        return -1; 
    }
};


int main()
{
    vector <int> v(5);
    for(int &x:v) {
        cin>>x;
    }
    Solution sol;
    cout<<sol.findDuplicate(v)<<endl;
    return 0;
}