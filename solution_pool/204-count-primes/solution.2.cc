class Solution {
public:
    bool isPrimes(int num){
      if(num==0 || num==1){
        return false;
      }
      for(int i=1;i*i<=num;++i){
        if(num%i==0) {
          return false;
        }
      }
      return true;
    }
  
    int countPrimes(int n) {
      // guard
      if(n==0||n==1) {
        return 0;
      }
      bool prime_table[n+1];
      
      memset(prime_table, 1, sizeof(prime_table));
      
      prime_table[0] = false;
      prime_table[1] = false;
      
      for(int i=2;i*i<n;++i){
        if(prime_table[i]) {
          for(int j=i*i;j<n;j+=i){
            prime_table[j]=false;
          }
        }
      }
      
      int count = 0;
      for(int i=2;i<n;++i){
        if(prime_table[i]){
          count++;
        }
      }
      
      return count;
        
    }
};
