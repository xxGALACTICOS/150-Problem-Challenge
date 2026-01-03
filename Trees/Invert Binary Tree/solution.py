# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root == None:
            return root
        if  (root.right == None) and (root.left == None): 
            return root
        self.swap(root)
        root.left = self.invertTree(root.left)
        root.right = self.invertTree(root.right)
        return root

    def swap(self, root):
        root.left,root.right = root.right,root.left
        
