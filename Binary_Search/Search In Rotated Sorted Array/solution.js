class Solution {
    search(nums,target){
        let right = nums.length - 1;
        let left = 0;

        while(left <= right){
            const mid = Math.floor((left + right )/2);

            if(target === nums[mid])
                return mid;
            // left half
            if(nums[left] <= nums[mid]){
                if(target < nums[mid] && target >= nums[left]){
                    right = mid -1;
                }
                else 
                    left = mid + 1;
            }

            // right half is sorted
            if(nums[right] >= nums[mid]){
                if(target > nums[mid] && target <= nums[right])
                    left = mid + 1;
                else 
                    right = mid - 1;
            }
          
        }
       return -1;
    }
}
