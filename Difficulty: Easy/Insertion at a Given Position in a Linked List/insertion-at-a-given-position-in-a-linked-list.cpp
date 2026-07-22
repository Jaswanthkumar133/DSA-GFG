/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        Node* temp=new Node(val);
        if(pos==1){
            temp->next=head;
            return temp;
        }
        Node* curr=head;
        while(pos>2 && curr){
            curr=curr->next;
            pos--;
        }
        if(curr==NULL){
            return head;
        }
        if(curr->next){
            temp->next=curr->next;
        }
        curr->next=temp;
        return head;
    }
};