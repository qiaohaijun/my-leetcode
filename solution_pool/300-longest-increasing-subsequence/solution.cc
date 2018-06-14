class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      
      // guard
      if(nums.size() ==0){
        return 0;
      }
      if( nums.size() ==1) {
        return 1;
      }
      vector<int> dp(nums.size(),1);
      
      for(int i=1;i<nums.size();++i){
        for(int k=0; k<i;++k){
          if(nums[i]>nums[k]){
            dp[i]=std::max(dp[i],dp[k]+1);
          } 
        }
        
      }
      int ret_max=0;
      for(int i=0;i<nums.size();++i) {
        ret_max=std::max(ret_max, dp[i]);
      }
      return ret_max;
    }
};
