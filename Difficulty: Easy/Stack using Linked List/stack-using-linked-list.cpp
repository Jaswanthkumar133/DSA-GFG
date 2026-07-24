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
class myStack {
    Node* head;
    int si;
  public:
    myStack() {
        // Initialize your data members
        head=nullptr;
        si=0;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(head==NULL){
            return true;
        }
        return false;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
        si++;
    }

    void pop() {
        // Removes the top element of the stack
        if(head!=NULL){
            head=head->next;
            si--;
            return;
        }
        return;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(head==NULL){
            return -1;
        }
        return head->data;
    }

    int size() {
        // Returns the current size of the stack.
        return si;
    }
};