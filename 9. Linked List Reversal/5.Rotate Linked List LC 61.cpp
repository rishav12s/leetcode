#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
            return head;
        int n=1;
        ListNode* last=head;
        while(last->next!=nullptr)
        {
            n++;
            last=last->next;
        }
        k=k%n;
        if(k==0)
            return head;
        int c=n-k;
        int count=1;
        ListNode* t=head;
        while(t)
        {
            if(count==c)
                break;
            count++;
            t=t->next;
        }
        ListNode* res=t->next;
        t->next=nullptr;
        last->next=head;
        return res;
    }
};