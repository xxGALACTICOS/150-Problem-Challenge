class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number}
     */
    search(nums, target) {
        var right = nums.length-1 ;
        var left = 0;
        while(left <= right){
            var mid = Math.floor((right - left)/2 + left);
            if(nums[mid] === target) return mid;
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
}
