class Solution {
public:
    int rob(vector<int>& nums) {
      // guard
      if(nums.size()==0){
        return 0;
      }
      if(nums.size()==1){
        return nums[0];
      }
      if(nums.size()==2){
        return std::max(nums[0],nums[1]);
      }
      
      vector<int> opt(nums.size(),0);
      // init phase
      opt[0] = nums[0];
      opt[1] = std::max(nums[0], nums[1]);
      
      for(int i=2; i< nums.size();++i){
        opt[i] = std::max(opt[i-2]+nums[i], opt[i-1]);
      }
      return opt[nums.size()-1];
      
      
    }
};
