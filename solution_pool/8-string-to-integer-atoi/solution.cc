class Solution {
public:
    int myAtoi(string str) {
      if(str.size()==0) {
        return 0;
      }
      
      int i = 0;
      int sign = 1;
      int base = 0;
      while(i<str.size() && str[i]==' ') { ++i;}
      
      if(str[i]=='+'){
        ++i;
      } else if(str[i] =='-') {
        ++i;
        sign = -1;
      }
      
      while(i<str.size() && str[i]>='0' && str[i]<='9') {
        if(base > INT_MAX/10 || (base == INT_MAX/10 && (str[i]-'0')>7)) {
          
          if(sign==-1) {
            return INT_MIN;
          } else {
            return INT_MAX;
          }
          
        }
        base = base*10+(str[i]-'0');
        ++i;
        
      }
      return base*sign;
      
      
        
    }
};
