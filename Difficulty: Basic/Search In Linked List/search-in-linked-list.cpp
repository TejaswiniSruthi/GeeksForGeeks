// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        Node * temp = head;
        bool b = false;
        while(temp!=NULL){
            if(temp->data == x){
                b = true;
            }
            temp = temp->next;
        }
        return b;
    }
};