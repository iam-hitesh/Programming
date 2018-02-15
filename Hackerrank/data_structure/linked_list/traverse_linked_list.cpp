void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node * p = head;
    while(p != NULL){
        printf("%d \n",p->data);
        p = p->next;
    }
}
