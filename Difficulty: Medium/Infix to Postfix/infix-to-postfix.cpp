class Solution {
  public:
  int prec(char ch){
      if(ch=='^'){
          return 3;
      }else if(ch=='*' || ch=='/'){
          return 2;
      }else if(ch=='+' || ch=='-'){
          return 1;
      }
      return 0;
  }
    string infixToPostfix(string& s) {
        // code here
        stack<char>st;
        string ans;
        for(char ch:s){
            if(isalnum(ch)){
                ans+=ch;
            }else if(ch=='('){
                st.push(ch);
            }else if( ch==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
            }else{
                while(!st.empty() && (prec(ch)<prec(st.top()) || prec(ch)==prec(st.top()))&& ch!='^'){
                    ans+=st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
