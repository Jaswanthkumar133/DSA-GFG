class myQueue {
    int *arr;
    int left;
    int right;
    int size;
    int count;
  public:
    myQueue(int n) {
        // Define Data Structures
        arr=new int[n];
        size=n;
        count=0;
        left=0;
        right=-1;
    }

    bool isEmpty() {
        // check if the queue is empty
        return count==0;
    }

    bool isFull() {
        // check if the queue is full
        return count==size;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull()){
            return;
        }
        right=(right+1)%size;
        arr[right]=x;
        count++;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty()){
            return;
        }
        left=(left+1)%size;
        count--;
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()){
            return -1;
        }
        return arr[left];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()){
            return -1;
        }
        return arr[right];
    }
};