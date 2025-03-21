class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>>x;
    map<string,vector<string>>z;
    string m;
    for (auto a : strs) {
        m = a;
        sort(a.begin(), a.end());
        z[a].push_back(m);
    }
    for (auto a : z) {
        x.push_back(a.second);
    }
    return x;
    
        }
    };
    