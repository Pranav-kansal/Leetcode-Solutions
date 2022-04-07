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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3,*temp;
        l3=new ListNode();
        temp=l3;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            temp->val=((l1->val)+(l2->val)+carry)%10;
            carry=((l1->val)+(l2->val)+carry)/10;
            l1=l1->next;
            l2=l2->next;
            if(carry!=0 || (l1!=NULL || l2!=NULL))
                temp->next=new ListNode();
            temp=temp->next;
        }
        if(carry!=NULL && (l1==NULL)&& l2==NULL)
        {
            temp->val=carry;
        }
        while(l1!=NULL)
        {
            temp->val=(carry + l1->val)%10;
            carry=(carry + l1->val)/10;
            l1=l1->next;
            if(l1!=NULL || carry!=0)
            {
                temp->next=new ListNode();
                temp=temp->next;
            }
        }
        while(l2!=NULL)
        {
            temp->val=(carry + l2->val)%10;
            carry=(carry + l2->val)/10;
            l2=l2->next;
            if(l2!=NULL || carry!=0)
            {
                temp->next=new ListNode();
                temp=temp->next;
            }
        }
        if(carry!=0 && temp!=NULL)
        {
            temp->val=carry;
        }
        return l3;
    }
};