class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      if(n==0) {
        return;
      }
      // m>n
      int l1 = m-1;
      int l2 = n-1;
      int l3 = n+m-1;
      std::cout << l1 << std::endl;
      std::cout << l3 << std::endl;;
      while(l1>=0 && l2>=0) 
      {
        if(nums1[l1] > nums2[l2]) 
        {
          nums1[l3] = nums1[l1];
          l1--;
          l3--;
        } else {
          nums1[l3] = nums2[l2];
          l2--;
          l3--;
        }
        
      }
      while(l1>=0) {
        nums1[l3]=nums1[l1];
        l3--;
        l1--;
      }
      
      while(l2>=0) {
        nums1[l3] = nums2[l2];
        l3--;
        l2--;
      }
      
      
      
    }

};
