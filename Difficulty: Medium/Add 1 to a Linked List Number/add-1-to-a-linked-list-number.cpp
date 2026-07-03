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
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
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
        Node* temp=reverse(head);
        int carry=1;
        Node* dell=temp;
        Node* dummy=new Node(-1);
        Node* temp2=dummy;
        while(dell || carry){
            int sum=0;
            if(dell){
                sum+=dell->data;
                dell=dell->next;
            }
            sum+=carry;
            Node* d=new Node(sum%10);
            carry=sum/10;
            dummy->next=d;
            dummy=dummy->next;
        }
        Node* ans=reverse(temp2->next);
        return ans;
        
    }
};