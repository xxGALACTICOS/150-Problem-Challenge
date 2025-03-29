class Solution {
    threeSum(nums) {
        const result = [];
        const seen = {};

        for (var i = 0; i < nums.length; i++) {
            seen[nums[i]] = i;
        }

        for(var i = 0;i<nums.length;i++){
            for(var j = i+1;j<nums.length;j++){
                var target = nums[i] + nums[j];

                if(seen[-target] && seen[-target] !== i && seen[-target] !== j){
                    const list = [-target,nums[i],nums[j]];
                    list.sort((a,b)=> a-b);

                    if(!seen[list]){
                        result.push(list);
                        seen[list] = 1;
                    }
                }
            }
        }
        return result;
    }
}
