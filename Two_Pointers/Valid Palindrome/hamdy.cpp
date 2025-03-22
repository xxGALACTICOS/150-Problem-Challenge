					    // -- Valid Palindrome -- \\

class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        string sCopy;

        for (char c : s) {
            if (c == ' ')
                continue;
            if ((c >= 'A' && c <= 'Z'))
                sCopy.push_back(c + 32);
            else if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
                sCopy.push_back(c);
        }
        for (int i = sCopy.size() - 1; i >= 0; i--) {
            if ((sCopy[i] > 'A' || sCopy[i] < 'Z') && (sCopy[i] > 'a' || sCopy[i] < 'z')) {  
                if (sCopy[i] == ' ')
                    continue;
                s2.push_back(sCopy[i]);
            }
        }
        bool valid = true;
        for (int i = 0; i < sCopy.size(); i++) {
            if (s2[i] != sCopy[i])
            {
                valid = false;
                break;
            }
        }
        if (!valid)
            return false;
        else
            return true;
    }
};
