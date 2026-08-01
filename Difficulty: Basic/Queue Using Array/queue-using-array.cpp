class myQueue {
    int *arr;
    int left;
    int right;
    int si;
    int count;

  public:
    myQueue(int n) {
        // Define Data Structures
        arr=new int[n];
        si=n;
        left=0;
        right=-1;
        count=0;
    }

    bool isEmpty() {
        // check if the queue is empty
        return count==0;
    }

    bool isFull() {
        // check if the queue is full
        return  count==si;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(!isFull()){
            right=(right+1)%si;
            arr[right]=x;
            count++;
        }
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(!isEmpty()){
            left=(left+1)%si;
            count--;
        }
    }

    int getFront() {
        // Returns the front element of the queue.
        if(!isEmpty()){
            return arr[left];
        }
        return -1;
    }

    int getRear() {
        // Return the last element of queue
        if(!isEmpty()){
            return arr[right];
        }
        return -1;
    }
};