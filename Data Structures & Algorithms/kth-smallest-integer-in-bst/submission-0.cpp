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

    vector<int> inorderTraversalTree;
    int kthSmallest(TreeNode* root, int k) {

        // inorder traversal

        inorderTraversal(root);
        return inorderTraversalTree[k-1];
    }

    void inorderTraversal(TreeNode* root){
        if (!root)
            return;
        inorderTraversal(root->left);
        inorderTraversalTree.push_back(root->val);
        inorderTraversal(root->right);

    }

};
