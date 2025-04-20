class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = nums.size() / 2;
        while (true) {
            if (nums[i] == target)
                return i;
            else if (nums[i] < target)
                i++;
            else if (nums[i] > target)
            {
                if (nums[i - 1] < target)
                    return -1;
                i--;
            }
            else return -1;
        }
    }
};
