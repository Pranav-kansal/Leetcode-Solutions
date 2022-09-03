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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> temp;
        ListNode* h = head;
        int count=1;
        while(count<left)
        {
            h = h->next;
            count++;
        }
        while(count<=right)
        {
            temp.push_back(h->val);
            h=h->next;
            count++;
        }
        count =1;
        h=head;
        while(count<left)
        {
            h = h->next;
            count++;
        }
        int i = temp.size()-1;
        while(count<=right)
        {
            h->val = temp[i];
            h= h->next;
            i--;
            count++;
            
        }
        return head;
    }
};