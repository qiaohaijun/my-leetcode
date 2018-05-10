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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> res;
      // guard
      
      if(root== NULL){
        return res;
      }
      
      queue<TreeNode*> cur, next;
      if(root!=NULL) {
        cur.push(root);
      }
      while(!cur.empty()){
        vector<int> level_vec;
        while(!cur.empty()) {
         TreeNode* node = cur.front();
          level_vec.push_back(node->val);
        
          cur.pop();
        if(node->left!=NULL) {
              next.push(node->left);

          
          }
          if(node->right!=NULL) {
            next.push(node->right);
          }
        }
        res.push_back(level_vec);
        std::swap(cur, next);
        
      }
      return res;
      
    }
};
