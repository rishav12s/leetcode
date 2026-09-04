#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplets(int sum, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=0,left,right,i,s=0;
        for(i=0;i<n-2;i++)
        {
            left=i+1;
            right=n-1;
            while(left < right)
            {
                s=arr[i]+arr[left]+arr[right];
                if(s>=sum)
                {
                    right--;
                }
                else if(s<sum)
                {
                    ans=ans+(right-left);
                    left++;
                }
            }
        }
        return ans;
    }   
};


int main()
{
    int target = 12;
    vector <int> v(5);
    for(int &x:v) {
        cin >> x;
    }
    Solution sol;
    int s=sol.countTriplets(target,v);
    cout<<s<<endl;
    return 0;
}