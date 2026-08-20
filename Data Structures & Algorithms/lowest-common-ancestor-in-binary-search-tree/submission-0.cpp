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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // as it is BST so if root value is in mid ofp & q then it is the ancestor 
        // if lesser then p&q then on right side else left

        if (root == NULL || p== NULL || q == NULL)
            return NULL;

        if (min(p->val, q->val) > root->val){
            return lowestCommonAncestor(root->right, p, q );
        }else if(max(p->val, q->val) < root->val){
            return lowestCommonAncestor(root->left, p, q );
        }else{
            return root;
        }
        
        

    }
};
