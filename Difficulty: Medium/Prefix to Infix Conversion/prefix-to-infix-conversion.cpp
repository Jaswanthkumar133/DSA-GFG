class Solution {
  public:
    string preToInfix(string &s) {
        // code here
        stack<string>st;
        for(int i=s.size()-1;i>=0;i--){
            if(isalnum(s[i])){
                string ss=string(1,s[i]);
                st.push(ss);
            }else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push('('+s1+s[i]+s2+')');
            }
        }
        return st.top();
    }
};