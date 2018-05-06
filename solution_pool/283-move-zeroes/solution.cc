class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      // guard
      if(nums.size()==0){
        return;
      }
      int i = 0;
      for(int j =0; j< nums.size(); ++j){
        if(nums[j] == 0) {
          continue;
        } else{
          nums[i] = nums[j];
          ++i;
        }
                
      }
      // add '0'
      for(int k = i; k < nums.size();++k) {
        nums[k] =0;
      }
        
    }
};
