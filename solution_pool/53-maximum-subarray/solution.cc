class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      // guard
      if(nums.size()==1){
        return nums[0];
      }
      int ans = 0;
      int ret_max = INT_MIN;
      for(int i=0;i<nums.size();++i){
        if(ans<0) {
          ans =0;
        }
        ans+=nums[i];
        ret_max = std::max(ans,ret_max);
      }
      return ret_max;
    }
};
