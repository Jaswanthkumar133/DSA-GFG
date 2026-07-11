class Solution {
  public:
    void insert(stack<int>&st,int n){
        if(st.empty()){
            st.push(n);
            return;
        }
        int temp=st.top();
        st.pop();
        insert(st,n);
        st.push(temp);
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int n=st.top();
        st.pop();
        reverseStack(st);
        insert(st,n);
    }
};