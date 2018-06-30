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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      // guard
      vector<vector<int>> res{};
      if(root==NULL) {
        return res;
      }
      
      // normal process
      std::queue<TreeNode* > cur, next;
      if(root!=NULL) {
        cur.push(root);
      }
      
      while(!cur.empty()) {
        vector<int> level{};
        while(!cur.empty()){
          TreeNode * node = cur.front();
          level.push_back(node->val);
          cur.pop();
          if(node->left!=NULL) {
            next.push(node->left);
          }
          if(node->right!=NULL) {
            next.push(node->right);
          }
        }
        res.push_back(level);
        std::swap(cur,next);
      
        
      }
      for(int i=0;i<res.size();++i) {
        if(i%2==1) {
          std::reverse(res[i].begin(), res[i].end());
        }
      }
      return res;
    }
};
