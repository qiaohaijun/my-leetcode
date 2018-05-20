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
    int dfs(TreeNode* root){
      if(root == NULL) {
        return 987654321;
      }
      
      if( root->left == NULL && root->right == NULL ) {
        return 1;
      } else {
        return 1+std::min(dfs(root->left), dfs(root->right));
      }
      
    }
  
    int minDepth(TreeNode* root) {
      // guard
      if(root == NULL){
        return 0;
      }
      
      return dfs(root);
    }
};
