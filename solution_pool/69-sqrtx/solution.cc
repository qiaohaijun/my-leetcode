class Solution {
public:
  
    int mySqrt(int x) {
      if(x==0){
        return 0;
      }
      
      if(x==1) {
        return 1;
      }
      
      long long j = x;
      while(j*j > x){
        j = j/2;
      }
      
      long long i{};
      for(i=j; i<=2*j; ++i){
        if(i*i>x){
          break;
        } 
        
      }
      
      return static_cast<int>(i-1);          
      
      
      
      
    }
};
