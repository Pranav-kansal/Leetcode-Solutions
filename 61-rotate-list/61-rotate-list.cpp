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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> sol;
        ListNode *temp = head;
        if(head==NULL)
            return head;
        while(temp!=NULL)
        {
            sol.push_back(temp->val);
                temp=temp->next;
        }
        int r;
        r=k%(sol.size());
        int j=0;
        temp=head;
        for(int i=0;i<sol.size();i++)
        {
            j= i-r;
            if(j<0)
            {
                j=sol.size()+j;;
            }
            temp->val=sol[j];
            temp=temp->next;
        }
        return head;
    }
};