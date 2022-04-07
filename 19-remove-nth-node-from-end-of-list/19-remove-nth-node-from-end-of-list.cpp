/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        int count=1;
        int d=size-n;
        if(n==size)
            head = head ->next;
        temp=head;
        while(temp!=NULL)
        {
            if(count==d)
            {
                if(d==0)
                {
                    head = head ->next;
                }
                else
                temp->next=temp->next->next;
            }
            temp=temp->next;
            count++;
        }
        return head;
    }
};