
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        res: List[int] = []
        if root == None:
            return res

        d = deque([root])
        while d:
            level_si = len(d)
            for i in range(level_si):
                curr = d.popleft()
                # check if this is the last node from right
                if i == level_si -1:
                    res.append(curr.val)

                if curr.left:
                    d.append(curr.left)
                if curr.right:
                    d.append(curr.right)
        return res
