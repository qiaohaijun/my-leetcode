class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      std::vector<int> ret{};
      // guard
      if(nums1.size() == 0 || nums2.size()==0) {
        return ret;
      }
      
      std::sort(nums1.begin(), nums1.end());
      std::sort(nums2.begin(), nums2.end());
      int i=0;
      int j=0;
      
      std::set<int> my_set{};
      while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]==nums2[j]){
          my_set.insert(nums1[i]);
          i++;
          j++;
        }
        
        if(nums1[i]<nums2[j]){
            i++;
        } 
          
        if(nums1[i]>nums2[j]){
            j++; 
          
        }
        
      }
      
      for(auto& item: my_set){
        ret.push_back(item);
      }
  
      return ret;
      
    }
};
