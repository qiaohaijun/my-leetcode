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
    void dfs(TreeNode* root, vector<string>&results, vector<int>& path){
      //leaf node
      if(root->left ==NULL && root->right==NULL)
      {
        path.push_back(root->val);
        string temp;
        for(int p : path){
          char buf[256];
          sprintf(buf, "%d->",p);
          temp+=buf;
        }
        results.push_back(temp.substr(0, temp.size()-2));
        return;
      } 
      
      path.push_back(root->val);

      if(root->left!=NULL) {
        dfs(root->left, results,path);
        path.pop_back();
      }
      
      if(root->right!=NULL){
        dfs(root->right,results, path);
        path.pop_back();

      }
    }
  
    vector<string> binaryTreePaths(TreeNode* root) {
      // guard   
      if(root==NULL) {
        return vector<string>();
      }
      
      vector<string> results;
      vector<int> path;
      dfs(root, results,path);
      return results;
      
    }
};
