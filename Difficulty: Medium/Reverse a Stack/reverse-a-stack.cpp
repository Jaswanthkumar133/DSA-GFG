class Solution {
  public:
    void insertStack(stack<int>&st,int n){
        if(st.empty()){
            st.push(n);
            return;
        }
        int t=st.top();
        st.pop();
        insertStack(st,n);
        st.push(t);
        return;
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int n=st.top();
        st.pop();
        reverseStack(st);
        insertStack(st,n);
    }
};