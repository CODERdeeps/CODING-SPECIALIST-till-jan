https://www.geeksforgeeks.org/problems/delete-alternate-nodes/1



/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    Node* cur = head;
    
    while(cur!=NULL && cur->next!=NULL)
    {
        Node* next = cur->next;
        Node* anext = cur->next->next;
        delete(next);
        cur->next = anext;
        cur = anext;
        
    }
    
}
