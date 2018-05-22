class Solution {
public:
    bool isPalindrome(int x) {
     if(x<0) {
       return false;
     }
     int tmp = x;
     int new_x = 0;
     while(tmp>0){
       new_x = new_x*10+tmp%10;
       tmp =tmp/10;
     }
     
     if(x==new_x){
       return true;
     } 
     return false;
      
    }
};
