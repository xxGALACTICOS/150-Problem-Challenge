# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    max = 0
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root == None:
            return self.max
        right = self.maxDepth(root.right)
        right += 1
        left = self.maxDepth(root.left);
        left += 1
        return max(left,right )

   
