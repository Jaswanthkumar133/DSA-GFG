/* Structure of linked list Node
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
    Node* rev(Node* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* prev=nullptr;
        Node* curr=head;
        Node* nex=NULL;
        while(curr){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // code here
        if(head==NULL){
            return NULL;
        }
        Node* reverse=rev(head);
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        int carry=1;
        while(carry || reverse){
            int sum=0;
            if(reverse){
                sum=reverse->data;
            }
            sum+=carry;
            Node* t=new Node(sum%10);
            carry=sum/10;
            temp->next=t;
            temp=temp->next;
            if(reverse){
                reverse=reverse->next;
            }
        }
        Node* ans=rev(dummy->next);
        return ans;
    }
};