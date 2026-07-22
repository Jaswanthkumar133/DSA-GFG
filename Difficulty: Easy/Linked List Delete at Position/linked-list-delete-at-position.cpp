/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *deleteAtPosition(Node *head, int pos) {
        // code here
        if(head==NULL){
            return NULL;
        }
        if(pos==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        Node* curr=head;
        while(pos>2 && curr){
            curr=curr->next;
            pos--;
        }
        if(curr==NULL || curr->next==NULL){
            return head;
        }
        Node* temp=curr->next;
        curr->next=temp->next;
        delete temp;
        return head;
    }
};