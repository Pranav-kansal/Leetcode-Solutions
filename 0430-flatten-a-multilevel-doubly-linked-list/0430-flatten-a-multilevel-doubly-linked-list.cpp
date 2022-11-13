/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
  Node* helper(Node* node) {
    if (!node) return nullptr;
    
    if (!node->next && !node->child) {
      return node;
    }
    
    Node* l = helper(node->child);
    Node* next = node->next;
    if (l) {
      node->next = node->child;
      node->child->prev = node;
      node->child = nullptr;
      l->next = next;
      if (next) {
        next->prev = l;
      } else {
        return l;
      }
    }
    return helper(next);
  }
  
  Node* flatten(Node* head) {
    helper(head);
    return head;
  }
};