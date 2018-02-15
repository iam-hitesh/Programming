Node* InsertNth(Node *head, int data, int position)
{
    Node * temp = new Node();
    temp->data = data;
    temp->next = NULL;
    
    if(head == NULL){
        return(temp);
        exit(1);
    }
    if(position == 0){
        temp->next = head;
        return(temp);
    }else{
        Node * p = head;
    for(int i = 0;i<position-1;i++){
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
    return(head);
    }
    
}
