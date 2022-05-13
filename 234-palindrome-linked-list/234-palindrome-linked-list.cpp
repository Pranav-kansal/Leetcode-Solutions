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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return false;
        if(head->next == NULL)return true;
        ListNode *temp = head;
        int count=0;
        while(temp)
        {
            temp = temp->next;
            count++;
        }
        int mid;
        if(count%2==0)mid = count/2;
        else
            mid = (count +1)/2;
        ListNode *second = head;
        while(mid>1)
        {
            second = second->next;
            mid--;
        }
        temp = second;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(second->next == NULL)
        {
            if(head->val == second->val)return true;
            else
                    return false;
            
        }
        ListNode *temp2 = second;
        second = second->next;
        temp2->next = temp;
        while(second != temp)
        {
            temp2=second;
            second = second->next;
            temp2->next = temp->next;
            temp->next = temp2;
        }
        while(temp)
        {
            if(temp->val == head->val)
            {
                temp = temp->next;
                head = head->next;
            }
            else
                break;
        }
        if(temp==NULL)
        {
            return true;
        }
        else
            return false;
    }
};