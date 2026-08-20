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
    vector<int> rightSideView(TreeNode* root) {

        //solution 1 


        //will be print last elements of level order traversal
        // TC = O(n)
        // SC = O(n)

        queue<TreeNode*>treeQueue;
        vector<int>rightView;

        if(root == NULL)
            return rightView;
        
        treeQueue.push(root);

        while(!treeQueue.empty()){
            int n = treeQueue.size();

            for (int i =0 ;i<n; i++){
                if(i==n-1)
                    rightView.push_back(treeQueue.front()->val);

                if(treeQueue.front()->left)
                    treeQueue.push(treeQueue.front()->left);
                 
                if(treeQueue.front()->right)
                    treeQueue.push(treeQueue.front()->right);   

                treeQueue.pop();
            }
        }

        return rightView;
        
    }
};
