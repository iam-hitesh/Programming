bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head == NULL)    return false;
    
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(fast == slow)    return true;
    }
    
    return false;
}
