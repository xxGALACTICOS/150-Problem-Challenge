# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    m = 0
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        res = self.dfs(root)
        return self.m
    def dfs(self,root):
        if not root:
            return 0
        
        right = self.dfs(root.right)
        left = self.dfs(root.left)
        self.m = max(left + right, self.m)

        return 1 + max(left,right)


 
