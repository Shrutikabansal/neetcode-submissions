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
    bool isValidBST(TreeNode* root) {
        
        if (root == NULL)
            return true;
        int minimum = INT_MIN, maximum = INT_MAX;

        return checkValidBST(root, minimum, maximum);
    }


    bool checkValidBST(TreeNode* root, int min, int max){
        if (root == NULL)
            return true;

        if(root->val > min && root->val < max){
            return checkValidBST(root->left, min, root->val) && checkValidBST(root->right, root->val, max);
        }else{
            return false;
        }

    }
};
