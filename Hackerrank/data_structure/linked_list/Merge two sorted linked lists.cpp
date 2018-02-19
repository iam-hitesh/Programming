/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if((headA==NULL)&&(headB==NULL)){
        return NULL;
    }
    if((headA!=NULL)&&(headB==NULL)){
        return headA;
    }
       
    if((headA == NULL)&&(headB!=NULL)){
        return headB;
    }
       
    if(headA->data < headB->data){
        headA->next = MergeLists(headA->next, headB);
    }
       else if(headA->data > headB->data){
           Node* temp = headB;
           headB = headB->next;
           temp->next = headA;
           headA = temp;
           headA->next = MergeLists(headA->next, headB);
       }
       return headA;
}
