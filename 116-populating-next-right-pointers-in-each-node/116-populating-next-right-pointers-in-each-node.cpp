/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
	public:
		Node* connect(Node* root) {
			//if root is empty, return the root i.e. NULL
			if(!root) return root;
		
			//queue for Breadth First Search
			queue<Node*> q;
			
			//insert the root node to the queue to begin BFS
			q.push(root);
		
			while(!q.empty()){
				//number of nodes at each level
				int sizeOfLevel = q.size();
				
				for(int i = 0; i < sizeOfLevel; ++i){
					
					//store the front node to modify its 'next'
					Node* node = q.front();
					
					//remove the node from the queue
					q.pop();
					
					//if the node is the last node in the current level, point the 'next' to NULL
					if(i == sizeOfLevel-1){
						node->next = NULL;
					}
					
					//else, the next will point to its next right node (front of the queue).
					else{
						node->next = q.front();
					}
					
					//add the children nodes to the queue for tracking
					if(node->left) q.push(node->left);
					if(node->right) q.push(node->right);
				}
			}
			return root;
		}
	};