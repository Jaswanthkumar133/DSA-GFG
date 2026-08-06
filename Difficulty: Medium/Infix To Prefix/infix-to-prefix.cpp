class Solution {
  public:
    int prec(char c){
        if(c=='^'){
            return 3;
        }else if(c=='*'||c=='/'){
            return 2;
        }else if(c=='+' ||c=='-'){
            return 1;
        }
        return 0;
    }
    string infixToPrefix(string &s) {
        // code here
        string ans="";
        stack<char>st;
        for(int i=s.size()-1;i>=0;i--){
            if(isalnum(s[i])){
                ans+=s[i];
            }else if(s[i]==')'){
                st.push(s[i]);
            }else if(s[i]=='('){
                while(!st.empty() && st.top()!=')'){
                    ans+=st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
            }else{
                while(!st.empty() &&(prec(s[i])<prec(st.top()) || (prec(s[i])==prec(st.top())&& s[i]=='^'))){
                    ans+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
