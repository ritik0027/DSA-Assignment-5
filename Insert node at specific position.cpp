SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* ptr=new SinglyLinkedListNode(data);
    ptr->data=data;
    ptr->next=NULL;
    position --;
    while(position!=0){
        temp=temp->next;
        position--;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    return llist;
}

