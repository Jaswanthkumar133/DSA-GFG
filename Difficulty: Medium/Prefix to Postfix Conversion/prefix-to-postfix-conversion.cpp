class Solution {
  public:
    string preToPost(string &s) {
        // code here
        stack<string>st;
        int i=s.size()-1;
        while(i>=0){
            if(isalnum(s[i])){
                st.push(string(1,s[i]));
            }else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push(s1+s2+s[i]);
            }
            i--;
        }
        return st.top();
    }
};