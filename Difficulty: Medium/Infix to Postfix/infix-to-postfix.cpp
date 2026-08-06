class Solution {
  public:
    int prec(char ch){
        if(ch=='^'){
            return 3;
        }else if(ch=='*' || ch=='/'){
            return 2;
        }else if(ch=='+'||ch=='-'){
            return 1;
        }
        return 0;
    }
    string infixToPostfix(string& s) {
        // code here
        string ans="";
        stack<char>st;
        for(char c:s){
            if(isalnum(c)){
                ans+=c;
            }else if(c=='('){
                st.push(c);
            }else if(c==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
            }else{
                while(!st.empty() &&(prec(c)<prec(st.top()) ||(prec(c)==prec(st.top())&& c!='^'))){
                    ans+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
