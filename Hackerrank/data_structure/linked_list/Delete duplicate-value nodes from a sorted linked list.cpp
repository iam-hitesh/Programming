/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head == NULL){
        return NULL;
    }
    
    Node * temp = head;
    while(head->next != NULL && head->data == head->next->data){
        head = head->next;
    }
    
    head->next = RemoveDuplicates(head->next);
    return head;
}
