 ListNode*ptr;
        ptr=head;
        ListNode*nptr;
        if(ptr->next==NULL){
            return head;
        }
        while(ptr->next!=NULL){
            nptr=ptr;
            ptr=ptr->next;
        }
        
        nptr->next=NULL;
        ptr->next=head;
        head=ptr;
        return head;
