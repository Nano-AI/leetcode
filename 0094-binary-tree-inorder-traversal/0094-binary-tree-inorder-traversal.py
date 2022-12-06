# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def i(node):
            if node is None:
                return
            i(node.left)
            o.append(node.val)
            i(node.right)
        o = []
        i(root)
        return o