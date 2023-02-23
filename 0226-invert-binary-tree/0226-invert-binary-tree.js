/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var invertTree = function(root) {
    function swap(node) {
        if (node == null) {
            return;
        }
        let right = node.right;
        let left = node.left;
        node.right = left;
        node.left = right;
        swap(node.right);
        swap(node.left);
    } 
    swap(root);
    return root;
};