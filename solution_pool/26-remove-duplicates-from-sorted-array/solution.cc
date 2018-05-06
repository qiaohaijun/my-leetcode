class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
      if(nums.size()==0 || nums.size()==1){
        return nums.size();
      }
      
      int i = 0;
      int k = 1;
      
      
      for(;k<nums.size();++k){
        if(nums[i]==nums[k]){
          continue;
        } else{
          nums[i+1] = nums[k];
          ++i;
        }
        
      }
      return i+1;
      
        
    }
};
