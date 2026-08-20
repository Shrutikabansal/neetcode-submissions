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

    int height(TreeNode* root){
        if(root == NULL)
            return 0;

        return 1+max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {

        // firsty chech lef & right height then go left side and do repeat and on right too


        if (root == NULL)
            return true;

        int leftH =height(root->left);
        int rightH =height(root->right);

        if ((abs(rightH-leftH) <=1) && isBalanced(root->left) && isBalanced(root->right))
            return true;

        return false;
        
    }
};
