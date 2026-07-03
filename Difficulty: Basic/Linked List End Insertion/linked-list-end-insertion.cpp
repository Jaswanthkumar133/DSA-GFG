/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp=new Node(x);
        if(head==NULL){
            return temp;
        }
        if(head->next==NULL){
            head->next=temp;
            return head;
        }
        Node* del=head;
        while(del->next!=NULL){
            del=del->next;
        }
        del->next=temp;
        return head;
    }
};