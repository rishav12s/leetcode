#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int happy(int n) {
        int sum=0,d=0;
        while(n>0)
        {
            d=n%10;
            sum=sum+(d*d);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=n;
        while(fast!=1)
        {
            slow=happy(slow);
            fast=happy(fast);
            fast=happy(fast);
            if(slow==fast && slow!=1)
                return false;
        }
        return true;
    }
};


int main()
{
    int n;
    cin>>n;
    Solution sol;
    cout<<boolalpha;
    cout<<sol.isHappy(n)<<endl;
    return 0;
}