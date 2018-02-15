Node* Insert(Node *head,int data)
{
    Node * temp = (Node * )malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    
    if(head == NULL){
        head = temp;
    }else{
        Node * p = head;
        while(p->next != NULL)
            p = p->next;
        p->next = temp;
    }
    return(head);
}

