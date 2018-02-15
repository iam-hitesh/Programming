void ReversePrint(Node *head)
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
    
    while(last != NULL){
        printf("%d \n",last->data);
        last = last->next;
    }
}
