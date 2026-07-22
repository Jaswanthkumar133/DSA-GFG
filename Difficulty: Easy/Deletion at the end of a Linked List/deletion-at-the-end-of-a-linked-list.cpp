/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        Node* curr=head;
        while(curr->next->next!=NULL){
            curr=curr->next;
        }
        Node * temp=curr->next;
        curr->next=nullptr;
        delete temp;
        return head;
    }
};