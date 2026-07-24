class Solution {
  public:
    string postToPre(string s) {
        // code here
        stack <string>st;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                st.push(string(1,s[i]));
            }
            else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push(s[i]+s2+s1);
            }
        }
        return st.top();
    }
};