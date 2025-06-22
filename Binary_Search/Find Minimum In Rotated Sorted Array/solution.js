class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findMin(nums) {
        let right = nums.length -1;
        let left = 0;

        while(left < right){
            const mid = Math.floor((right + left)/2)
            if(nums[mid] > nums[right]){
                left = mid + 1;
            }
            else {
               right = mid;
            }
        }
        return nums[left];
    }
}
