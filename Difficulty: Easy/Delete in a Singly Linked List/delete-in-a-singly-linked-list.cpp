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
    Node* deleteNode(Node* head, int pos) {
        // code here
        if(head==NULL){
            return head;
        }
        if(pos==1){
            return head->next;
        }
        Node* dell=head;
        while(pos>2 && dell){
            dell=dell->next;
            pos--;
        }
        if(dell==NULL){
            return head;
        }
        Node* temp=dell->next;
        dell->next=temp->next;
        delete temp;
        return head;
        
    }
};