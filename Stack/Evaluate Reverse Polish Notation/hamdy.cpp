
                                            // -- Evaluate Reverse Polish Notation -- \\

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res = 0;
        stack<int> stack;
        int i = 0;
        do {

            string s = tokens[i];
            if (s.size() == 1 && (s < "0" || s > "9")) {
                int temp1, temp2, tempRes;
                temp1 = stack.top();
                stack.pop();
                temp2 = stack.top();
                stack.pop();
                if (s == "+") {
                    tempRes = temp1 + temp2;
                    stack.push(tempRes);
                }
                else if (s == "-") {
                    tempRes = temp2 - temp1;
                    stack.push(tempRes);
                }
                else if (s == "*") {
                    tempRes = temp2 * temp1;
                    stack.push(tempRes);
                }
                else if (s == "/") {
                    tempRes = temp2 / temp1;
                    stack.push(tempRes);

                }
            }
        
            else {
                stack.push(stoi(tokens[i]));
              // this "stoi" function take number from string 
              // because if u typed / int(tokens[i][0]) \ you'll get ascii value not real value
            }
            i++;
        } while (i < tokens.size());
        
        return int(stack.top());
    }
};
