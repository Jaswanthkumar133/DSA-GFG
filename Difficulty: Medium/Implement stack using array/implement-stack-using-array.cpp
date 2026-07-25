class myStack {
    int *arr;
    int size;
    int top=-1;
  public:
    myStack(int n) {
        // Define Data Structures
        arr=new int[n];
        size=n;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==-1){
            return true;
        }
        return false;
        
    }

    bool isFull() {
        // check if the stack is 
        if(top==size-1){
            return true;
        }
        return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(top==size-1){
            return;
        }
        arr[++top]=x;
    }

    void pop() {
        if(isEmpty()){
            return;
        }
        top--;
    }

    int peek() {
        // Returns the top element of the stack
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
};