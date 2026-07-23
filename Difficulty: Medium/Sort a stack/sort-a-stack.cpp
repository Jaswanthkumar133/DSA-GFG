class Solution {
  public:
    void sortstack(stack<int>&st,int n){
        if(st.empty() || st.top()<=n){
            st.push(n);
            return;
        }
        int t=st.top();
        st.pop();
        sortstack(st,n);
        st.push(t);
        return;
    }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int n=st.top();
        st.pop();
        sortStack(st);
        sortstack(st,n);
    }
};
