class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
           sort(nums.begin(), nums.end());
    vector<pair<int, int>>x;
    vector<int>z;
    int max=0;
    if (nums.size() == 1) {
        z.push_back(nums[0]);
        return z;
    }
    for (int i =1;i<=nums.size();i++){
        max++;
        if ((nums[i] != nums[i - 1]) || (i==nums.size()-1)) {
            x .push_back ({max,nums[i-1]});
            max = 0;
        }
    }
    sort(x.rbegin(),x.rend());
    for (int i = 0; i < k; i++) {
        z.push_back(x[i].second);
    }
    return z;
        
        }
    };
    