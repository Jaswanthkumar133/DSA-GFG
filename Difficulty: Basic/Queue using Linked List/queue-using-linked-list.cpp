class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {
    Node* left;
    Node* right;
    int si;
  public:
    myQueue() {
        // Initialize your data members
        left=NULL;
        right=NULL;
        si=0;
    }

    bool isEmpty() {
        // check if the queue is empty
        return si==0;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        if(si==0){
            Node* temp=new Node(x);
            left=temp;
            right=temp;
            si++;
            return ;
        }
        Node* temp=new Node(x);
        right->next=temp;
        right=right->next;
        si++;
    }

    void dequeue() {
        // Removes the front element of the queue
        if(!isEmpty()){
            Node* dell=left;
            left=left->next;
            delete dell;
            si--;
            return;
        }
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(si==0){
            return -1;
        }
        return left->data;
    }

    int size() {
        // Returns the current size of the queue.
        return si;
    }
};
