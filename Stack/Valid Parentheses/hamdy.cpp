					    // -- Valid Parentheses -- \\

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            bool inputClosed = ((c == '}') || (c == ')') || (c == ']'));
            if (s[0] == '}' || s[0] == ')' || s[0] == ']') {
                return false;
            }
            if (c == '{' || c == '(' || c == '[')
                st.push(c);
            else if (inputClosed && st.empty())
                return false;
            else if ((c == '}' && st.top() == '{') || (c == ')' && st.top() == '(') || (c == ']' && st.top() == '['))
                st.pop();
            else
                return false;
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};
