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
  
    bool is_Judge(TreeNode* Lroot, TreeNode *Rroot){    
      if(Lroot == NULL && Rroot == NULL) {
        return true;
      } else if (Lroot != NULL && Rroot != NULL) {
        if(Lroot->val != Rroot->val) {
          return false;
        } else {
          return is_Judge(Lroot->left, Rroot->right) && is_Judge(Lroot->right,Rroot->left);
        }
      } else {
        return false;
      }
      

    }
  
    bool isSymmetric(TreeNode* root) {
      
      if (root == NULL){
        return true;
      }
      
      return is_Judge(root->left, root->right);
        
    }
};
