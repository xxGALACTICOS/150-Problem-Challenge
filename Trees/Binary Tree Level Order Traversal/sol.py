class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        res: List[List[int]] = []
        self.dfs(root, 0, res)
        return res

    def dfs(self, root, lvl, res):
        if not root:
            return
        if len(res) == lvl:
            res.append([])
        
        res[lvl].append(root.val)
        self.dfs(root.left, lvl + 1, res)
        self.dfs(root.right, lvl + 1, res)
