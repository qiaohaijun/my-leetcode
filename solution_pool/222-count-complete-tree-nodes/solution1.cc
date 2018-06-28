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
    int countNodes(TreeNode* root) {
      // guard
      if(root == NULL) {
        return 0;
      }
      
      return dfs(root);
      
      
      
        
    }
  private:
    int dfs(TreeNode* root) {
      // finish cond
      if(root->left==NULL && root->right == NULL) {
        return 1;
      }
      int numL = 0;
      int numR = 0;
      if(root->left) {
        numL = dfs(root->left);
      }
      if(root->right){
        numR = dfs(root->right);
      }
      return numL+numR+1;
    }
};
