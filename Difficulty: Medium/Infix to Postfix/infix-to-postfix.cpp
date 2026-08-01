class Solution {
	public:
	int prec(char ch) {
		if (ch == '^') {
			return 3;
		} else if (ch == '*' || ch == '/') {
			return 2;
		} else if (ch == '+' || ch == '-') {
			return 1;
		}
		return 0;
	}
	string infixToPostfix(string& s) {
		// code
		stack<int>st;
		string ans = "";
		for (int i = 0; i<s.size(); i++) {
			if (isalnum(s[i])) {
				ans += s[i];
			} else if (s[i] == '(') {
				st.push(s[i]);
			} else if (s[i] == ')') {
				while (!st.empty() && st.top() != '(') {
					ans += st.top();
					st.pop();
				}
				if (!st.empty()) {
					st.pop();
				}
			} else {
				while (!st.empty() && (prec(s[i])<prec(st.top()) || (prec(s[i]) == prec(st.top()) && s[i] != '^'))) {
					ans += st.top();
					st.pop();
					
				}
				st.push(s[i]);
			}
		}
		while (!st.empty()) {
			ans += st.top();
			st.pop();
		}
		return ans;
		
	}
};
