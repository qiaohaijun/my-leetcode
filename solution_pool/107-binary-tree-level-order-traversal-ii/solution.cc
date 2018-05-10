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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      vector<vector<int>> res{};
      queue<TreeNode*> cur, next;
      if(root!=NULL) {
        cur.push(root);
      }
      
      while(!cur.empty()) {
        vector<int> level{};

        while(!cur.empty()){
          TreeNode* node = cur.front();
          level.push_back(node->val);
          cur.pop();
          if(node->left!=NULL) {
            next.push(node->left);
          }
          if(node->right!=NULL){
            next.push(node->right);
          }
          
          
        }
        res.push_back(level);
        std::swap(cur, next);
      }
      
      std::reverse(res.begin(), res.end());
      
      return res;
      
        
    }
};
