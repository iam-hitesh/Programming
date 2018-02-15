Node* Insert(Node *head,int data)
{
  // Complete this method
    Node * temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        Node * p = head;
        temp->next = p;
        head = temp;
    }
    return(head);
}
