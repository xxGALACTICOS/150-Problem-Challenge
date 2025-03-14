                                          //  -- Contains Duplicate -- \\

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         bool is_duplicate = false;
 for (int i = 0; i < nums.size(); i++) {
     for (int j = 0; j < nums.size(); j++) {
         if (j == i)
             continue;
         if (nums[j] == nums[i]) {
             is_duplicate = true;
             return true;
         }

     }
 }
 if (!is_duplicate)
     return false;
    }
};
