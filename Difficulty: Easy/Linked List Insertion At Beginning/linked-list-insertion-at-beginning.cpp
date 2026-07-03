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
    Node *insertAtFront(Node *head, int x) {
        // Code here
        Node* temp=new Node(x);
        if(head==NULL){
            return temp;
        }
        temp->next=head;
        return temp;
    }
};