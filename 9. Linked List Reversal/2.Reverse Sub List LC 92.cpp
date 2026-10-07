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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr)
            return nullptr;
        if(left==right)
            return head;
        int times=right-left+1;
        int pos=1;
        ListNode* t=head;
        ListNode* curr=nullptr;
        ListNode* prev=nullptr;
        ListNode* before=nullptr;
        ListNode* nex=nullptr;
        while(t!=nullptr)
        {
            if(pos<left)
            {
                before=t;
                t=t->next;
                pos++;
                continue;
            }
            curr=t;
            while(times--)
            {
                nex=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nex;
            }
            t->next=curr;
            if(before)
            {
                before->next=prev;
                return head;
            }
            return prev;
            
        }
        return nullptr;
    }
};