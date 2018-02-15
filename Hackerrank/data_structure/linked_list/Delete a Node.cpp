Node* Delete(Node *head, int position)
{
  
    if(position == 0 && head->next != NULL){
        head = head->next;
    }else{
        Node * p =new Node();
        p = head;
        for(int i = 0;i<position-1;i++){
            p = p->next;
        }
        Node * temp = new Node();
        temp = p->next->next;
        p->next = temp;
    }
    return(head);
}
