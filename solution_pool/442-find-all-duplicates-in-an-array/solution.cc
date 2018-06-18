class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> ret{};
      
      
      for(int i=0;i<nums.size();++i) 
      {
        int idx = abs(nums[i])-1;
        if(nums[ idx ]<0){
          ret.push_back(idx+1);
          
        } 
        nums[ idx ] = -nums[idx];
        
        
        
        
      }
      return ret;
    }
};
