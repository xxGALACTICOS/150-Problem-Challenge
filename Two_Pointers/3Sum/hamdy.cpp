class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        set<vector<int>>sets;
        vector<int>v;
        vector<int>zeros = {};
        map<int, bool>map;

        for (int i = 0; i < nums.size(); i++) {
            zeros.push_back(0);
        }

        if (nums == zeros) {
            zeros = { 0,0,0};
            res.push_back(zeros);
            return res;
        }

        for (int i = 0; i < nums.size();i++) {
            map[nums[i]] = true;
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i == j)
                    continue;
                int k = -1 * (nums[i] + nums[j]);
                if ((k == nums[i] || k == nums[j]))
                    continue;
                if (map[k]) {
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(k);

                    if (sets.find(v) == sets.end()) {
                        if (v == nums)
                        {
                            res.push_back(v);
                            return res;
                        }
                        sort(v.begin(), v.end());
                        sets.insert(v);
                        v.clear();
                    }
                    else
                    {
                        v.clear();
                        continue;
                    }
                }
            }
        }

        for (vector<int>v : sets) {
            res.push_back(v);
        }
        return res;
    }
};
