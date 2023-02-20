class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node*ptr=new Node(data); 
        Node*temp=head;
        bool b=false;
        if((temp->data)>data){
            ptr->next=head;
            head=ptr;
            return head;
        }
        if(temp->next==NULL){
            temp->next=ptr;
            return head;
        }
        Node*prev=head;
        while(temp->next!=NULL){
            if(((temp->next)->data)>data){
                break;
            }
            temp=temp->next;
            b=true;
        }
        ptr->next=temp->next;
        temp->next=ptr;
        return head;
    }
};
