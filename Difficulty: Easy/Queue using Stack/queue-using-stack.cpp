class myQueue {
stack<int>st;
  public:
    myQueue() {
        // Initialize your data members
    }
    
    void push(stack<int>&st,int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int n=st.top();
        st.pop();
        push(st,x);
        st.push(n);
        return;
    }
    void enqueue(int x) {
        // Implemen
        if(st.empty()){
            st.push(x);
            return;
        }
        if(!st.empty()){
            push(st,x);
        }
    }

    void dequeue() {
        // Implement dequeue operation
        if(!st.empty()){
            st.pop();
        }
    }

    int front() {
        // Implement front operation
        if(!st.empty()){
            return st.top();
        }
        return -1;
    }

    int size() {
        // Implement size operation
        return st.size();
    }
};
