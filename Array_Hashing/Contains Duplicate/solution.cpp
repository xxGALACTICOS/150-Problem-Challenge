                                            //  -- Contains Duplicates -- \\

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
	set<int> s;
	for (int num = 0; num < nums.size();num++) {
		s.insert(nums[num]);
	}
	if (s.size() == nums.size())
		return false;
	else
		return true;
    }
};
