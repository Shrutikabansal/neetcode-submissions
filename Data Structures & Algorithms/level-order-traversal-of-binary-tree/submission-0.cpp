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
    vector<vector<int>> levelOrder(TreeNode* root) {

        queue<TreeNode*>treeQueue;
        vector<vector<int>> levelOrderTree;

        if(root == NULL){
            return levelOrderTree;
        }

        treeQueue.push(root);
        
        while(!treeQueue.empty()){
            vector<int>singleLevel;
            int levelSize = treeQueue.size();

            for(int i=0; i< levelSize; i++){
                singleLevel.push_back(treeQueue.front()->val);
                if(treeQueue.front()->left)
                    treeQueue.push(treeQueue.front()->left);
                if(treeQueue.front()->right)
                    treeQueue.push(treeQueue.front()->right);
                treeQueue.pop();
            }
            levelOrderTree.push_back(singleLevel);
        }
        return levelOrderTree;
        
    }
};
