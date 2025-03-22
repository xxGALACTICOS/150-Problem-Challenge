                                            // -- Group Anagrams -- \\

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> ordered = strs;
        map<string, vector<string>> freq;
        for (int j = 0; j < strs.size(); j++) {
            sort(ordered[j].begin(), ordered[j].end());
        }
        for (int i = 0; i < strs.size(); i++) {
            freq[ordered[i]].push_back(strs[i]);
        }
        for (pair<string, vector<string>> p : freq) {
            res.push_back(p.second);
        }

        return res;
    }
};
