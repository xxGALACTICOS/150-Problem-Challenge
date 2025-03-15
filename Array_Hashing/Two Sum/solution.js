class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
        twoSum(nums, target) {

        
        // Create object  to maintain the nums' indecies 

        const indecies = {};

        for ( var i = 0;i<nums.length;i++){
            
            if(indecies[nums[i]]){
                indecies[nums[i]] = [...indecies[nums[i]],i];
            }
            else {
                indecies[nums[i]] = [i];
            }
        }


        var right = nums.length-1;
        var left = 0;

        nums.sort((a,b) => a-b)

        while ( left < right){
            var sum = nums[left] + nums[right];
            if( sum === target){
                if(nums[left] === nums[right]){
                    return [indecies[nums[left]][0], indecies[nums[left]][1]]
                }
                else{
                    return [indecies[nums[left]][0] , indecies[nums[right]][0]];
                }
            }
            else if( sum < target )
                left++;
            else if ( sum > target ) 
                right--;
        }
        return []
    }
}
