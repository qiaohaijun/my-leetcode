class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0;
      int j=height.size()-1;
      int max_water=0;
      while(i<j){
        int width = j-i;
        max_water=std::max(max_water, width*std::min(height[i],height[j]));
        if(height[i]<= height[j]){
          i++;
        } else{
          j--;
        }
            
      }
      return max_water;
    }
};
