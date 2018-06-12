class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> ret{};
      std::set<vector<int>> set{};
      // guard
      if(nums.size() <3){
        return ret;
      }
      
      int base=0;
      std::sort(nums.begin(), nums.end());

      for(base=0; base<nums.size()-2; base++){
        int target = 0-nums[base];
        int low = base+1;
        int high = nums.size()-1;
        while(low < high){
          if(nums[low]+nums[high] == target) {
            set.insert({nums[base],nums[low],nums[high]});
          }
          if(nums[low]+nums[high]<target){
            low++;
          } else {
            high--;
          }
        }
        
      }
      for(auto item:set){
        ret.push_back(item);
      }
      return ret;
      
    }
};
