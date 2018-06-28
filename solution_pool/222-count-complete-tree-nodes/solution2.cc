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
    int countNodes(TreeNode* root) {
      // guard
      if(root == NULL) {
        return 0;
      }
      
      int tree_deep=0;
      int tree_height=0;
      TreeNode* my_node = root;
      while(my_node!=NULL){
        my_node = my_node->left;
        tree_deep++;
      }
      my_node = root;
      while(my_node!=NULL){
        my_node = my_node->right;
        tree_height++;
      }
      
      if(tree_deep == tree_height) {
        return (1<<tree_height)-1;
      } else {
        return countNodes(root->left)+ countNodes(root->right)+1;
      }
      
        
    }

};
