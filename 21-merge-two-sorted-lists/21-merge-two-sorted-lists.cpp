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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp;
       if(list1!=NULL && list2!=NULL)
       {
           if(list2->val>list1->val)
                    {
                        temp=list1;
                        list1=list1->next;
                        temp->next=list2;
                        list2=temp;
                    }
            ListNode *str=list2;
            while(str->next!=NULL && list1!=NULL)
            {
                 if(list2->val>list1->val)
                    {
                        temp=list1;
                        list1=list1->next;
                        temp->next=list2;
                        list2=temp;
                    }
               else if(str->next->val>list1->val)
                {
                    temp=list1;
                    list1=list1->next;
                    temp->next=str->next;
                    str->next=temp;
                }
               str=str->next; 
            }
            if(str->next==NULL && list1!=NULL)
            {
                while(list1!=NULL)
                {
                    temp=list1;
                    list1=list1->next;
                    str->next=temp;
                    str=str->next;
                }
            }
            
           return list2;
       }
      else if(list2==NULL)
      {
          return list1;
      }
        else
        {
            return list2;
        }
    }
};