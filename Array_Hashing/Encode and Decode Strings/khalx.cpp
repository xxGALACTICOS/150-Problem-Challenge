class Solution {
    public:
    
        string encode(vector<string>& strs) {
    
        string s;
        for (auto a : strs) {
            s += a + ".";
    
        }
        return s;
    }
    
    vector<string> decode(string s) {
        vector<string>z;
        string x;
        for (int i=0;i<s.length();i++) {
            
    
            if(s[i]=='.') {
                z.push_back(x);
                x.clear();
                continue;
            }
            if (i == s.length() - 1) {
                x += s[i];
                z.push_back(x);
                break;
            }
            x += s[i];
        }
        return z;
    
    }
    };
    