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
    int goodNodes(TreeNode* root) {

        if( root == NULL)
            return 0;
        return goodNodesCount(root, root->val);
    }


    int goodNodesCount(TreeNode* root, int maxValue){
        if(root == NULL){
            return 0;
        }

        int currentMaxCount=0;
        if(root->val >= maxValue){
            currentMaxCount = 1;
        }
        maxValue = max(maxValue, root->val);
        currentMaxCount += goodNodesCount(root->left, maxValue);
        currentMaxCount += goodNodesCount(root->right, maxValue);

        return currentMaxCount;
    }
};
