class Solution {
	public:
	int pred(char ch) {
		if (ch == '^') {
			return 3;
		} else if (ch == '*' || ch == '/') {
			return 2;
		} else if (ch == '+' || ch == '-') {
			return 1;
		} else {
			return 0;
		}
	}
	string infixToPostfix(string& s) {
		// code here
		string ans = "";
		stack<char>st;
		for (char ch:s) {
			if (isalnum(ch)) {
				ans += ch;
			} else if (ch == '(') {
				st.push('(');
			} else if (ch == ')') {
				while (!st.empty() && st.top() != '(') {
					ans += st.top();
					st.pop();
				}
				if (!st.empty()) {
					st.pop();
				}
			} else {
				    while(!st.empty() &&(pred(ch) < pred(st.top()) ||
                       (pred(ch) == pred(st.top()) && ch != '^'))) {
                    ans += st.top();
                    st.pop();
                }
				st.push(ch);
			}
		}
		while (!st.empty()) {
			ans += st.top();
			st.pop();
		}
		return ans;
	}
};
