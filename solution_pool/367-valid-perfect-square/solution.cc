class Solution {
public:
    bool isPerfectSquare(int num) {
      long long j = num;
      
      while(j*j>num){
        j = j/2;
      }
      
      for(int i=j;i<=2*j;++i){
        if(i*i==num){
          return true;
        }
      }
      
      return false;
    }
};
