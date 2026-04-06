class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums) == 1:
            return True
        return self.sol(nums,0)

    def sol(self,nums,curr):
        while True:
            if nums[curr] == 0:
                return False
            if curr >= len(nums)-1:
                return True

            jump = nums[curr]
            if curr + jump >= len(nums)-1:
                return True

            maxJump = self.getMaxIndex(nums,curr+1, curr + jump)
            furthestJump = curr + jump
            print(maxJump , furthestJump)

            r1 = self.sol(nums,maxJump)
            r2 = False
            if maxJump != furthestJump and nums[furthestJump] != 0:
                print("i am gonna recurisve")
                r2 = self.sol(nums,furthestJump)
            return r1 or r2



    def getMaxIndex(self,nums,start,end):
        mIdx = -1
        m = 0
        while start < end:
            if nums[start] >= m:
                m = nums[start]
                mIdx = start
            start += 1
        if mIdx == -1:
            return start
        return mIdx



        
