class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      // guard
      if(nums.size()==0 || nums.size()==1){
        return;
      }
      k = k%nums.size();
      if(k==0) {
        return;
      }
      
      int point = nums.size()-k;
      //************************************
      std::reverse(nums.begin(), nums.begin()+point);
      std::reverse(nums.begin()+point, nums.end());
      std::reverse(nums.begin(),nums.end());
        
    }
};
