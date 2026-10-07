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
    void reverse(ListNode* left, int times) {
        ListNode* curr=left;
        ListNode* prev=nullptr;
        ListNode* nex=nullptr;
        while(times--)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }

    }
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr)
            return head;
        int size=2;
        ListNode* left=head;
        ListNode* nextleft=nullptr;
        ListNode* prevleft=nullptr;
        ListNode* res=nullptr;
        ListNode* right=nullptr;
        while(true)
        {
            right=left;
            for(int i=0;i<size-1;i++)
            {
                if(right==nullptr)
                    break;
                right=right->next;
            }
            if(right)
            {
                nextleft=right->next;
                reverse(left,size);
                if(prevleft)
                    prevleft->next=right;
                prevleft=left;
                if(res==nullptr) //first right is new head
                    res=right;
                left=nextleft;
            }
            else //right = null case
            {
                if(prevleft)
                    prevleft->next=left;
                if(res==nullptr) //only 1 node in LL case
                    res=left;
                break;
            }
        }
        return res;
    }
};