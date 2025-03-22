					    // -- Products of Array Except Self-- \\
						//(In O(n^2) time complexity)\\   
class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int>res;
		vector<int>copy;
		for (int i = 0; i < nums.size(); i++) {
			copy.push_back(nums[i]);
		}
		int product;
		for(int j=0;j<nums.size();j++)
		{
			product = 1;
			for (int i = 0; i < nums.size(); i++) {
				if (i == j)
				   continue;
				product *= nums[i];
			}
			res.push_back(product);
		}
		return res;
	}
};
