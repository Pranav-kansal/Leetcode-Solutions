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
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode *temp = head;
        int count =1;
        while(temp->next)
        {
            count++;
            temp= temp->next;
        }
        cout<<count;
        int mid = count/2;
        cout<<" "<<mid;
        int c = 0;
        temp = head;
        while(c!=mid)
        {
            c++;
            temp = temp->next;
        }
        return temp;
    }
};