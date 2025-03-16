class Solution:
    def hasDuplicate(self, nums: List[int]) :
        if len(nums) == len(set(nums)) :
            return False 
        else :
            return True
        