/**
 * 
 *  using string stream.
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
    void dfs(TreeNode* root, vector<int>& path, vector<string>& res){

      // leaf node
      if(root->left == NULL && root->right == NULL){
        path.push_back(root->val);
        
        stringstream ss;

        for(int p: path){
          ss<< to_string(p) << "->";
        }
        string result = ss.str();
        res.push_back(result.substr(0, result.size()-2));
        path.pop_back();
      }
      
      path.push_back(root->val);
      
      if(root->left != NULL) {
        dfs(root->left, path, res);
        path.pop_back();
      }
      
      if(root->right != NULL) {
        dfs(root->right, path, res);
        path.pop_back();
      }
    }
  
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<int> path{};
      vector<string> res{};
      // guard
      if(root ==NULL ){
        return res;
      }
      dfs(root, path, res);
      return res;
    }
};
