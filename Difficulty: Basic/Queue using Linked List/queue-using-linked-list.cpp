class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node* head;
    Node* left;
    int si;
  public:
    myQueue() {
        // Initialize your data members
        head=NULL;
        left=NULL;
        si=0;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(left==NULL){
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        if(left==nullptr){
            Node* temp=new Node(x);
            left=temp;
            head=temp;
            si++;
            return;
        }
        Node * temp=new Node(x);
        head->next=temp;
        head=head->next;
        si++;
        return;
    }

    void dequeue() {
        // Removes the front element of the queue
        if(left==NULL){
            return ;
        }
        left=left->next;
        si--;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(left==NULL){
            return -1;
        }
        int n=left->data;
        return n;
    }

    int size() {
        // Returns the current size of the queue.
        return si;
    }
};
