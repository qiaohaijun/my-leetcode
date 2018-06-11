class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
      if(m ==0 || n == 0){
        return 0;
      }

      while(n > m) { 
        n = n & (n-1);
        if (n==0) {
          break;
        }
      }
      return n;
    }
};
