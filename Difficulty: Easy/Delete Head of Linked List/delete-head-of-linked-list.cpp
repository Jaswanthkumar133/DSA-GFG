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
    Node *deleteHead(Node *head) {
        // code here
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        Node*curr=head;
        head=head->next;
        delete curr;
        return head;
    }
};
