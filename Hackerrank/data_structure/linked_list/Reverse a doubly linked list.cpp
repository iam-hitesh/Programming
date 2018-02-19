/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    struct Node *current,*prev,*next;
    if(head==NULL)return NULL;
    current=head;
    prev=NULL;
    while(current!=NULL)
        {
        next=current->next;
        current->next=prev;
        current->prev=next;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
