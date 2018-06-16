class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int> ret{};
      // guard
      if(nums1.size() == 0 || nums2.size() ==0){
        return ret;
      }
      
      std::sort(nums1.begin(), nums1.end());
      std::sort(nums2.begin(), nums2.end());
            
      int i=0;
      int j=0;
      for(; i<nums1.size()&&j<nums2.size(); )
      {
        if(nums1[i] == nums2[j])
        { 
          ret.push_back(nums1[i]);
          i++;
          j++;
        }
        
        if(nums1[i]>nums2[j])
        {
          j++;
        }
        
        if(nums1[i]<nums2[j])
        {
          i++;
        }
        
      }
      return ret;
      
    }
};
