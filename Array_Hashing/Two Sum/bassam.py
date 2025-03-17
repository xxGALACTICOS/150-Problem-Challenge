from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic_nums = {}
        for i, num in enumerate(nums):
            dic_nums[num]=i
        for i, num in enumerate(nums):
            if target-num in dic_nums and dic_nums[target-num] != i :
                return [i, dic_nums[target-num]]
