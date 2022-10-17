SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* p=llist;
    SinglyLinkedListNode* q=NULL;
    if(position==0){
        int a=llist->data;
        p=llist;
        llist=llist->next;
        delete p ;
    }
    else {
        for(int i=0;i<=position-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        int x=p->data;
        delete p;
    }
        return llist ;    
}

