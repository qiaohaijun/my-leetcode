/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void inner_dfs(TreeNode* root, vector<int> & output){
      // guard
      if(root== NULL) {
        return ;
      }
      TreeNode* leftTree = root->left;
      TreeNode* rightTree = root->right;
      inner_dfs(leftTree, output);
      output.push_back(root->val);
      inner_dfs(rightTree, output);
      
      
    }
  
    vector<int> inorderTraversal(TreeNode* root) {
      
      std::vector<int> ret_vec;

      // guard
      if(root== NULL) {
        return ret_vec;
      }
      inner_dfs(root,ret_vec);
      return ret_vec;
        
    }
};
