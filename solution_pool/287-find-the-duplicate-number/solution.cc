class Solution {
public:
    int helper(vector<int>& nums, int target){
      int count = 0;
      
      for(int i=0; i<nums.size();++i){
        
        if(nums[i] <= target){
          count++;
        }
        
      }
      return count;
    }
  
    int findDuplicate(vector<int>& nums) {
      int low = 1;
      int high = nums.size()-1;
      int count = 0;
      
      while(low < high){
        int mid = low +((high-low)>>1);
        
        count = helper(nums, mid);
        
        if(count <= mid){
          low = mid+1;
        } else{
          high = mid;
        }
      }
      return low;
    }
};
