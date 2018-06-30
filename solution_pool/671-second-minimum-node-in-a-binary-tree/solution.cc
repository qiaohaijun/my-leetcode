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
    int min(TreeNode * root, int val) {

      if(root->val!=val) {
        return root->val;
      }
      if( root->left!=NULL) {
        return std::min(min(root->left, root->val),min(root->right, root->val));
      }
      return  INT_MAX;
    }
    int findSecondMinimumValue(TreeNode* root) {
      int val = root->val;
      int find_num = min(root, root->val);
      return find_num==INT_MAX?-1:find_num;
    }
};
