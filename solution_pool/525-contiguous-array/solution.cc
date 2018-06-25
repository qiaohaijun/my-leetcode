class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // guard
      if(nums.size()==0) {
        return 0;
      }
      
      for(int i=0; i<nums.size();++i){
        if(nums[i] == 0){
          nums[i] = -1;
        }
      }
      
      map<int,int> idx_map;
      int ret=0;
      int sum=0;
      idx_map[0] = -1;
      for(int i=0 ;i<nums.size();++i) {
        sum +=nums[i];
        auto it = idx_map.find(sum);
        
        if(it!=idx_map.end()) {
          ret  = max(ret, i-it->second);
        } else {
          idx_map[sum] = i;
        }
      }
      return ret;

    }
};
