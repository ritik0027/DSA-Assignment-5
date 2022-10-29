DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data){
    DoublyLinkedListNode* temp= new DoublyLinkedListNode(data);
    temp->next=NULL;
    temp->prev=NULL;
    if(llist==NULL){
        return temp;
    }
    else if(temp->data < llist->data){
        temp->next=llist;
        llist->prev=temp;
        llist=temp;
     }
    else {
         DoublyLinkedListNode* p=llist;
         while(temp->data > p->data){
             if(p->next==NULL){
                 p->next=temp;
                 temp->prev=p;
                 return llist;
             }
         p=p->next;
         }
         p->prev->next=temp;
         temp->prev=p->prev;
         temp->next=p;
         p->prev=temp;
    }
    return llist;
}
