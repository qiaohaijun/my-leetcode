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
    int dfs(TreeNode * root) {
      
      if(root == NULL) {
        return 0;
      }    
      else {
        return 1+std::max(dfs(root->left), dfs(root->right));
      }
    }
  
  
    int maxDepth(TreeNode* root) {
        // guard
      if(root==NULL) {
        return 0;
      }
      return dfs(root);
    }
};
