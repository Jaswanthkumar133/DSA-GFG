class Solution {
  public:
    string preToPost(string &s) {
        // code here
        stack<string>st;
        reverse(s.begin(),s.end());
        for(char c:s){
            if(isalnum(c)){
                st.push(string(1,c));
            }else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push(s1+s2+string(1,c));
            }
        }
        return st.top();
    }
};