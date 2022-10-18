SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* p=llist;
    while(p->next!=NULL){
        if(p->data==p->next->data){
            p->next=p->next->next;
        }
        else {
            p=p->next;
        }
    }
    return llist;
    }
