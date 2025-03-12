class Solution{
    longestConsecutive(nums){
        if(nums.length <= 1) return nums.length;
        nums.sort((a,b) => a-b);
        var maxLen = 1;
        var counter = 1;
        for (var i = 1; i < nums.length; i++){
            if ( nums[i] - nums[i-1] === 1) counter++;
            else if (nums[i] - nums[i-1] === 0) continue;
            else{
                maxLen = Math.max(maxLen, counter);
                counter = 1;
            }
        }
        maxLen = Math.max(maxLen, counter);
        return maxLen 
    }
}
//nums=[9,1,4,7,3,-1,0,5,8,-1,6] // => [-1,-1,0,1,3,4,5,6,7,8,9] // 6
//[2,20,4,10,3,4,5] // => [2,3,4,5,10,20]
//[0,3,7,2,5,8,4,6,0,1,1] // => [0,1,1,2,3,4,5,6,7,8] // 9

// 0
// 1
// 2
// 3
// 4 
// 5  4 > 3 counter = 2
// 6  5 > 4 counter = 3
// 7  6 > 5 counter = 4
// 8  7 > 6 counter = 5
// 9  8 > 7 counter = 6
// 10 9 > 8 counter = 7
// 11 
