/**
 * 剑指 Offer 07. 重建二叉树
 *
 *输入某二叉树的前序遍历和中序遍历的结果，请构建该二叉树并返回其根节点。
 *
 *假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
 *
 * 
 *
 *示例 1:
 *
 *
 *Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
 *Output: [3,9,20,null,null,15,7]
 *示例 2:
 *
 *Input: preorder = [-1], inorder = [-1]
 *Output: [-1]
 * 
 *
 *限制：
 *
 *0 <= 节点个数 <= 5000
 *
 * 
 */

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    private Map<Integer, Integer> hash;

    public TreeNode buildTree(int[] preorder, int[] inorder) {
        hash = new HashMap<>();
        for(int i = 0; i < inorder.length; i ++) hash.put(inorder[i], i);
        return dfs(preorder, inorder, 0, preorder.length - 1, 0, inorder.length - 1);      
    }

    public TreeNode dfs(int[] preorder, int[] inorder, int pl, int pr, int il, int ir){
        if(pl > pr) return null;
        TreeNode root = new TreeNode(preorder[pl]);

        int k = hash.get(root.val);

        root.left = dfs(preorder, inorder, pl + 1, pl + k - il, il, k - 1);
        root.right = dfs(preorder,inorder, pl + 1 + k - il, pr, k + 1, ir);

        return root;
    }
}