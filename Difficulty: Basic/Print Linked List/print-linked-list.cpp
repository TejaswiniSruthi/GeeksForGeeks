/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> displayList(Node *head) {
        // code here
        vector <int> v;
        Node * temp = head;
        while(temp!= NULL){
            v.push_back(temp->data);
            temp = temp->next;
        }
        return v;
    }
};