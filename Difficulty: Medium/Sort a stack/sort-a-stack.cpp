class Solution {
  public:
    void insert(stack<int>&st,int n){
        if(st.empty() || st.top()<=n){
            st.push(n);
            return;
        }
        int temp=st.top();
        st.pop();
        insert(st,n);
        st.push(temp);
    }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int n=st.top();
        st.pop();
        sortStack(st);
        insert(st,n);
    }
};
