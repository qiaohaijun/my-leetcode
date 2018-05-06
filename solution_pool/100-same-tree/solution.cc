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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    
      // guard
      // different Tree
      if ((p == NULL && q != NULL) || (p!=NULL &&  q==NULL)) {
        return false;
      }
      if(p==NULL & q==NULL) {
        return true;
      }
      
      

      
      bool isLeftTreeSame = false;
      bool isRightTreeSame = false;
      
      if( p->val == q->val) {
        isLeftTreeSame = isSameTree(p->left, q->left);
        isRightTreeSame = isSameTree(p->right,q->right);
        return isLeftTreeSame && isRightTreeSame;
      } else {
        return false;
      }
      
      
    }
};
