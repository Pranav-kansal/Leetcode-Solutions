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
    ListNode* reverse(ListNode *tail,ListNode *temp)
    {
        if(temp == tail)
            return tail;
        else
        {
            ListNode *temp2;
            temp2 = temp->next;
            temp->next = tail->next;
            tail->next = temp;
            return reverse(tail,temp2);
        }
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *tail = head;
        if(head == NULL || head->next==NULL)return head;
        while(tail->next)
        {
            tail = tail->next;
        }
        return reverse(tail,head);
    }
};