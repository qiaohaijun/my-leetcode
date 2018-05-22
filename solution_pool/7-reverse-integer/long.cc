class Solution {
public:
    int reverse(int x) {
      long sum = 0;
      while(x!=0){
        int s = x%10;
        sum = sum*10+s;
        x=x/10;
      }
      
      if(sum < INT_MIN || sum > INT_MAX){
        return 0;
      }
      return static_cast<int>(sum);
    }
};
