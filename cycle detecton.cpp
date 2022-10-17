bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* fast= head;
    SinglyLinkedListNode* slow=head;
    while(fast && fast->next !=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            return true;
        }
    }
    return false;

}
