class Solution {
public:
    bool canJump(vector<int>& nums) {
      vector<bool> visit_table (nums.size(),false);
      visit_table[0] = true;
      for(int i=0; i<nums.size(); ++i){
        for(int k=1; k<=nums[i]&&k<nums.size();++k) {
          visit_table[i+k] = true;
        }
      }
      
      for(int i=0; i< nums.size(); ++i) {
        if(visit_table[i] == false) {
          return false;
        }
      }
      return true;
    }
};
