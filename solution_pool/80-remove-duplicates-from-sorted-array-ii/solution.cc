class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // guard path
      if(nums.size()<=2) {
        return nums.size();
      }
      
      // corret path
      
      int new_idx = 0;
      int old_idx = 1;
      int count = 1;
      for(;old_idx < nums.size(); ++old_idx ){
        if(nums[new_idx]==nums[old_idx] && count < 2){
          ++count;
          nums[++new_idx] = nums[old_idx];
        } 
        else if(nums[new_idx] != nums[old_idx]) {
          count = 1;
          nums[++new_idx]= nums[old_idx];
        }
        
      }
      
      return new_idx+1;
      
    }
};
