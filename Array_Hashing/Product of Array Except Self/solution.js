class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums) {
       var product = 1;
       var countZeros = 0;
       var index = -1;

       for (var i =0;i<nums.length;i++){
            if(nums[i]===0){
                countZeros++;
                index = i;
            }
            else{
                product *= nums[i];
            }
       }
       // check the case if there are zeros
       if(countZeros === 1){
            nums.fill(0);
            nums[index] = product;
            return nums;
       }
       else if(countZeros > 1){
            nums.fill(0);
            return nums;
       }

       // Check the rest of there's not zero

       for (var i = 0;i < nums.length;i++){
            nums[i] = product / nums[i];
       }

       return nums;
    }
}
