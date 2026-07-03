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
            return head->next;
        }
        Node* dell=head;
        while(x>2 && dell!=NULL){
            dell=dell->next;
            x--;
        }
        if(dell==NULL || dell->next==NULL){
            return head;
        }
        Node * temp=dell->next;
        dell->next=temp->next;
        delete temp;
        return head;
    }
};