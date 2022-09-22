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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *shead = head;
        ListNode *ushead = head->next;
        while(ushead!=NULL)
        {
            ListNode *node = ushead;
            if(node->val<head->val)
            {
                head->next = node->next;
                ushead = ushead->next;
                ListNode *temp = shead;
                if(node->val<shead->val)
                {
                    node->next = shead;
                    shead = node;
                }
                else
                {
                    while(temp!=head)
                    {
                        if(temp->next->val>node->val)
                        {
                           node->next = temp->next;
                            temp->next = node;
                            break;
                        }
                        else
                        {
                            temp = temp->next;
                        }
                    }
                }
            }
            else
            {
                head = head->next;
                ushead = ushead->next;
            }
            
        }
        return shead;
    }
};