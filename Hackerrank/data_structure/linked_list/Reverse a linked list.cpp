Node* Reverse(Node *head)
{
  // Complete this method
    Node * last = NULL;
    
    while(head != NULL){
        Node * temp = new Node();
        temp->data = head->data;
        temp->next = last;
        last = temp;
        head = head->next;
    }
    return(last);
}
