class Solution {
public:
    
    int addDigits(int num) {
      // guard
      if(num <10) {
        return num;
      }
      
      int result = 0;
      
      while(num>0){
        result += num %10;
        num = num/10;
      }
      return addDigits(result);

    }
};
