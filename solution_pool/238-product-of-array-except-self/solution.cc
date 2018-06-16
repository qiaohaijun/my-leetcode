class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> ret{};
      if(nums.size()==0) {
        return ret;
      }
      
      vector<int> psum(nums.size(),1);
      vector<int> rpsum(nums.size(),1);
      
      for(int i=1; i< nums.size(); ++i) {
        psum[i] = psum[i-1]*nums[i-1];
      }
      
      for(int i=nums.size()-2;i>=0;--i){
        rpsum[i] = rpsum[i+1]*nums[i+1];
      }
      
      for(int i=0; i<nums.size(); ++i){
        ret.push_back(psum[i]*rpsum[i]);
      }
      return ret;
      
    }
};
