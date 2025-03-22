					    // -- Encode and Decode Strings -- \\

class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for (int i = 0; i < strs.size(); i++) {
           s.append(strs[i]);
           s.append("~");
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        vector<char> v;
        int i = 0;
        while (i < s.size()) {
            v.push_back(s.at(i));
            i++;
        }

        string st;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == '~' || i == v.size() - 1) {
                res.push_back(st);
                st = "";
                continue;
            }
            st.push_back(v[i]);
        }
        return res;
    }

};
