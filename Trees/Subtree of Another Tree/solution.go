/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func isSubtree(root *TreeNode, subRoot *TreeNode) bool {
	// base part
	if subRoot == nil {
		return true
	}
	if root == nil {
		return false
	}

	// recursive part
	if sameTree(root, subRoot) {
		return true
	}

	return isSubtree(root.Right, subRoot) || isSubtree(root.Left, subRoot)
}

func sameTree(root *TreeNode, sub *TreeNode) bool {
	if root == nil && sub == nil {
		return true
	}
    if root != nil && sub != nil && root.Val == sub.Val {

	return sameTree(root.Right, sub.Right) && sameTree(root.Left, sub.Left)
    }
    return false

}
