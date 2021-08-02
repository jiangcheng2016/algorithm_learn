/**
 *剑指 Offer 27. 二叉树的镜像
 *请完成一个函数，输入一个二叉树，该函数输出它的镜像。

例如输入：

     4
   /   \
  2     7
 / \   / \
1   3 6   9
镜像输出：

     4
   /   \
  7     2
 / \   / \
9   6 3   1

 

示例 1：

输入：root = [4,2,7,1,3,6,9]
输出：[4,7,2,9,6,3,1]
 

限制：

0 <= 节点个数 <= 1000

 * 
 */

/**
 * Java 版本
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
    public TreeNode mirrorTree(TreeNode root) {
    //    if(root != null){
    //     mirrorTree(root.left);
    //     mirrorTree(root.right);
    //     TreeNode temp;
    //     temp = root.left;
    //     root.left = root.right;
    //     root.right = temp;

    //     return root;
    //    }else{
    //        return null;
    //    }

    if(root == null) return null;
    mirrorTree(root.left);
    mirrorTree(root.right);
    TreeNode temp;
    temp = root.left;
    root.left = root.right;
    root.right = temp;

    return root;
    }
}

/**
 * C ++ 版本
 * 
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left,root->right);
        return root;
    }
};

