# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        if root == None:
            return 0

        count = 1

        def checkChildParent(parent, child, lastMax):
            nonlocal count
            if child == None:
                return

            if child.val >= lastMax:
                lastMax = child.val
                count += 1

            checkChildParent(child,child.right,lastMax)
            checkChildParent(child,child.left,lastMax)

        checkChildParent(root, root.right,root.val)
        checkChildParent(root, root.left,root.val)
        return count



  
