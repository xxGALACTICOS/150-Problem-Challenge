                                      //-- Top K Frequent Elements --\\

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        map<int, int> freq;
        for (int i : nums) {
            freq[i]++;
        }
        for (int i = 0; i < k; i++) {
            int highest;
            pair<const int,int>* ptr = NULL;
            for (auto j = freq.begin(); j != freq.end(); j++) {
                int value = j->second;
                if (value > temp) {
                    highest = j->first;
                    ptr = &(*j);
                }
            }
            v.push_back(ptr->first);
            ptr->second = -1;
        }
        return v;
    }
};
