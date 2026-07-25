class myStack {
    vector<int>arr;
    int size;
  public:
    myStack(int n) {
        // Define Data Structures
        size=n;
    }

    bool isEmpty() {
        // check if the stack is empty
        return arr.empty();
    }

    bool isFull() {
        // check if the stack is full
        if(arr.size()==size){
            return true;
        }
        return false;
    }

    void push(int x) {
        // inserts x at the top of the sta
        if(!isFull()){
            arr.push_back(x);
        }
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty()){
            arr.pop_back();
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty()){
            return arr.back();
        }
        return -1;
    }
};