class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<pair<char, int>> v1;
        vector<pair<char, int>> v2;
        map<char, int>freq_s;
        map<char, int>freq_t;
        bool equal = false;
        int size;
        for (char c : s) {
            freq_s[c]++;
        }
        for (char c : t) {
            freq_t[c]++;
        }
        for (pair<char,int> p : freq_s) {
            v1.push_back(p);
        }        
        for (pair<char,int> p : freq_t) {
            v2.push_back(p);
        }        
        if (v1.size() != v2.size())
            return false;
        else
        {
            size = v2.size();
            for (int i = 0; i < size; i++) {
                if (v1[i] == v2[i]) {
                    continue;
                }
                else
                    return false;
            }
            return true;
        }
    }
};
