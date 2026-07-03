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
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL){
            return head;
        }
        if(x==1){
            head=head->next;
            return head;
        }
        Node* temp=head;
        while(x>2 && temp){
            temp=temp->next;
            x--;
        }
        if(temp==NULL || temp->next==NULL){
            return head;
        }
        Node* dell=temp->next;
        temp->next=dell->next;
        delete dell;
        return head;
    }
};