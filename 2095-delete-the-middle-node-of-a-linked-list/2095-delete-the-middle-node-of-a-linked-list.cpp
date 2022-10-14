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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode * temp  = head;
        int size = 0;
        while(temp!=NULL)
        {
            size++;
            temp= temp->next;
        }
        int mid = size/2;
        cout<<mid;
        int index =0;
        temp  = head;
        while(index < mid-1)
        {
            temp = temp->next;
            index+=1;
        }
        temp->next = temp->next->next;
        return head;
    }
};