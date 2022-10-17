DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data){
    DoublyLinkedListNode* temp=new DoublyLinkedListNode(data);
    if(llist==NULL){
        return temp;
    }
    if(temp->data<llist->data){
        temp->next=llist;
        llist->prev=temp;
        llist=temp;
    }
    return llist;
}
