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
    vector<int> nextLargerNodes(ListNode* head) { 

//         step 1 : reverse linkedlist
        int count=0;
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *forward=NULL;
        
        while(curr)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            
            count++;
        }
        head=prev;
        
//    step 2: simple push pop operation in stack 
        
        stack<int> s;
        s.push(0);
        
        vector<int> ans(count);
        int i=count-1;
        while(head){
            while(s.top()<=head->val&&s.top()>0)
                s.pop();
            ans[i--]=s.top();
            s.push(head->val);
            head=head->next;
        }
        
        return ans;
    }
};