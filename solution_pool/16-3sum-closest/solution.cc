class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      // sort
      std::sort(nums.begin(),nums.end());
      int gap = INT_MAX;
      int res = INT_MAX;
      for(int cur=0; cur<nums.size()-2;++cur){
        int front = cur+1;
        int back = nums.size()-1;
        while(front<back) {
          int sum = nums[cur]+nums[front]+nums[back];
          int local_gap = INT_MAX;
          if(sum>target) {
            if(gap > sum-target) {
              gap = sum-target;
              res = sum;
            }      
            back--;

          }
          else if(sum<target){
            if(gap>target-sum) {
              gap = target-sum;
              res =sum;
            }
            front++;
          }
          else{
            return target;
          }
        } // end while
        while(cur<nums.size()-2&& nums[cur]==nums[cur+1]){
          cur++;
        }
        
      } // end for  
        return res;
    }
};
