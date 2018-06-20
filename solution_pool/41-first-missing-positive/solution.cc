class Solution {
public:
      int firstMissingPositive(vector<int>& nums) {
        // guard
      if(nums.size()==0) {
        return 1;
      }
      nums.push_back(0);
      
      for(int i=0;i<nums.size();++i) {
        
        if(nums[i]<=0) {
          nums[i] = INT_MAX;
        }
      }
      
      for(int i=0; i<nums.size()-1;++i){
        int idx = abs(nums[i]);
        if( idx<nums.size()&&nums[idx]>0 ) {
          nums[idx] = -nums[idx];
        }
      }
      
      for(int i=1; i<nums.size();++i) {
        if(nums[i] >=0) {
          return i;
        }
      }
      return nums.size();
    }
  
   
};
