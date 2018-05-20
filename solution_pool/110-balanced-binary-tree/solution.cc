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
    int getDepth(TreeNode* root){
      // guard root == NULL
      if(root == NULL ){
        return 0;
      }
      // 叶子节点
      return 1+std::max(getDepth(root->left), getDepth(root->right));  
      
    }
  
    bool isBalanced(TreeNode* root) {
      
      if(root==NULL) {
        return true;
      }
      int left_depth = getDepth(root->left);
      int right_depth = getDepth(root->right);
      
      if(std::abs(left_depth-right_depth)>1) {
        return false;
      } else {
        return isBalanced(root->left) && isBalanced(root->right);
      }
        
    }
};
