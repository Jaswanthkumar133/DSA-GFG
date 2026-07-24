class Solution {
  public:
    string postToInfix(string &exp) {
        // Write your code here
        stack<string>st;
        for(int i=0;i<exp.size();i++){
            if(isalnum(exp[i])){
                st.push(string(1,exp[i]));
            }else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push('('+s2+exp[i]+s1+')');
            }
        }
        return st.top();
    }
};