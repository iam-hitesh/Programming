int CompareLists(Node *headA, Node* headB)
{
    while(headA != NULL && headB != NULL && headA->data==headB->data){
        headA = headA->next;
        headB = headB->next;
    } 
    return headA==headB;
}
