class Solution {
  public:
    string preToPost(string &s) {
        // code here
        stack<string>st;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(isalnum(s[i])){
                st.push(string(1,s[i]));
            }else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push(s1+s2+s[i]);
            }
        }
        return st.top();
    }
};