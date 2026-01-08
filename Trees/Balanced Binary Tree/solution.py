# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    balanced = True
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        self.dfs(root)
        return self.balanced

    def dfs(self,root):
        if not root:
            return 0

        left = self.dfs(root.left)
        right = self.dfs(root.right)

        print(root.val, left,right)
        if abs(right - left) > 1:
            print("hey bro")
            self.balanced = False
            

        return 1 + max(left,right)
        
        
