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
    vector<double> averageOfLevels(TreeNode* root) {
      vector<double> res{};
      queue<TreeNode*> cur, next;
      
      if(root!=NULL){
        cur.push(root);
      }
      
      while(!cur.empty()){
        int count=0;
        double sum=0.0;
        
        while(!cur.empty()) {
          TreeNode * node = cur.front();
          count++;
          sum+=node->val;
          cur.pop();
          if(node->right!=NULL){
            next.push(node->right);
            
          }
          if(node->left!=NULL) {
            next.push(node->left);
          }
          
        }
        
        res.push_back(sum/count);
                      
        std::swap(cur,next);
        
      }
      return res;
    }
};
