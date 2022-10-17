int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* p=llist;
    int nodesize=0;
    while(p!=NULL){
        p=p->next;
        nodesize++;
    }
    p=llist;
    for(int i=0;i<nodesize-positionFromTail-1;i++){
        p=p->next;
    }
    return p->data;
}
