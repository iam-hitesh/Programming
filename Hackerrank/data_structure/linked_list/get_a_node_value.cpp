/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node * last = NULL;
    
    while(head != NULL){
        Node * temp = new Node();
        temp->data = head->data;
        temp->next = last;
        last = temp;
        head = head->next;
    }
    
    
    int position = 0;
    while(position != positionFromTail){
        last = last->next;
        position++;
    }
    int data = last->data;
    return data;
}
