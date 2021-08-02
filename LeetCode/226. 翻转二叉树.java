/**
 * 226. 翻转二叉树
 *
 * 翻转一棵二叉树。

示例：

输入：

     4
   /   \
  2     7
 / \   / \
1   3 6   9
输出：

     4
   /   \
  7     2
 / \   / \
9   6 3   1

 */


/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode invertTree(TreeNode root) {
        // TreeNode temp;
        // if(root != null){
        //     invertTree(root.left);
        //     invertTree(root.right);
        //     temp = root.left;
        //     root.left = root.right;
        //     root.right = temp; 
        //     return root;
        // }else{
        //     return null;
        // }

        if(root == null) return null;
        TreeNode temp;
        invertTree(root.left);
        invertTree(root.right);
        temp = root.left;
        root.left = root.right;
        root.right = temp;
        
        return root;
    }
}