class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      if(nums.size()<=1){
        return false;
      }
      
      std::unordered_map<int, int> table{};
      for(int i=0; i<nums.size(); ++i) {
        
        auto it = table.find(nums[i]);
        
        if(it==table.end()){
          table.emplace(nums[i],1);
        } else {
          
          return true;
          
        }
       
      }
      return false;
    }
};
