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
    Node*left;
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
        // check if the queue is 
        return si==0;
        
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        if(left==NULL){
            Node* temp=new Node(x);
            left=temp;
            right=temp;
            si++;
            return;
        }
        Node*temp=new Node(x);
        right->next=temp;
        right=right->next;
        si++;
    }

    void dequeue() {
        // Removes the front element of the 
        if(!isEmpty()){
            left=left->next;
            si--;
        }
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(!isEmpty()){
            return left->data;
        }
        return -1;
    }

    int size() {
        // Returns the current size of the queue
        return si;
    }
};
