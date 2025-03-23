class Solution {
public:
    bool isValid(string s) {
if (s[0] == ')' || s[0] == '}' || s[0] == ']')
	return false;

stack<char>x;
for (int i = 0; i < s.length(); i++) {
	if (x.empty()) {
		if (s[i] == ')' || s[i] == '}' || s[i] == ']')
			return false;
	}
	if (s[i] == '(' || s[i] == '{' || s[i] == '[')
	{
		x.push(s[i]);
	}
	if (s[i] == ')') {
		if (x.top() == '(') {
			x.pop();
			
		}
        else
	return false;
	}
	if (s[i] == '}') {
		if (x.top() == '{') {
			x.pop();

		}
        else
	return false;
	}
	if (s[i] == ']') {
		if (x.top() == '[') {
			x.pop();

		}
        else
	return false;
	}


}
if (x.empty())
	return true;


return false;


    }
};
