class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = nums[0]
        sum = 0

        for num in nums:
            sum += num
            res = max(res,sum)
            if sum < 0:
                sum = 0
        return res

        
