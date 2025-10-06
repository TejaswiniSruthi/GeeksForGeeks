/* The structure of linked list is the following
class Node
{
    int data;
    Node next;
    Node(int d) {
        data = d;
        next = null;
    }
}
*/

// h
//           t2
// 5|2.a -> 2|4.a -> 4|null

class Solution {
    // Function to remove duplicates from unsorted linked list.
    public Node removeDuplicates(Node head) {
        // Your code here
        Map<Integer, Integer> mp = new HashMap<>();
        if(head==null) return head;
        Node temp = head;
        Node temp1 = head;
        Node temp2 = null;
        Node head2 = null;
        boolean b = true;
        while(temp!=null){
            mp.put(temp.data, mp.getOrDefault(temp.data,0)+1);
            temp=temp.next;
        }
        while(temp1!=null){
            if(mp.get(temp1.data)>=1){
                Node nnode = new Node(temp1.data);
                if(b){
                    temp2 = nnode;
                    head2 = temp2;
                    b = false;
                }
                temp2.next=nnode;
                temp2=temp2.next;
                mp.put(temp1.data,0);
            }
            temp1=temp1.next;
                
        }
        return head2;
    }
}