class Solution {
public:
    double power(double x, int n){
      if(n==0){
        return 1.;
      } 
      if(n==1){
        return x;
      }

      double half = power(x,n/2);
      if(n%2!=0){
        return x*half*half;
      }
      return half*half;  

    }
  
    double myPow(double x, int n) {
      if(n<0){
        return 1.0/power(x,-n);
      }
      if(n%2!=0) {
        return x*power(x, n-1);
      }
      return power(x,n);
        
    }
};
