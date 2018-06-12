class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>> ret{};
      std::set<vector<int>> set{};
      // guard
      if(nums.size()<4){
        return ret;
      }
      std::sort(nums.begin(),nums.end());
      
      for(int baseL=0; baseL<nums.size()-3; baseL++){
        for(int baseR=nums.size()-1; baseR>baseL+2; baseR--){
          int low = baseL+1;
          int high = baseR-1;
          
          while(low<high){
            if(nums[baseL]+nums[baseR]+nums[low]+nums[high] == target){
              set.insert({nums[baseL],nums[low],nums[high],nums[baseR]});
            }
            // 夹逼法
            if(nums[baseL]+nums[baseR]+nums[low]+nums[high]<target){
              low++;
            } else {
              high--;
            }
            
          }          
        }
        
      }
      
      for(auto item: set){
            ret.push_back(item);
      }
      return ret;
    }
};
