class myStack {
    int *arr;
    int size;
    int top;
  public:
    myStack(int n) {
        // Define Data Structures
        arr= new int[n];
        size=n;
        top=-1;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==-1){
            return true;
        }
        return false;
    }

    bool isFull() {
        // check if the stack is full
        if(top==size-1){
            return 1;
        }
        return 0;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(top==size){
            return;
        }
        arr[++top]=x;
    }

    void pop() {
       if(top==-1){
           return;
       }
       int t=arr[top];
       top--;
        // removes an element from the top of the stack
    }

    int peek() {
        // Returns the top element of the stack
        if(top>-1){
            int n=arr[top];
            return n;
        }
        return -1;
    }
};