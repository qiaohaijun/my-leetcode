class Solution {
public:
  bool judgeSquareSum(int c) {
    int i=0;
    int j= static_cast<int>(sqrt(c));
    
    while(i<=j) {
      int tmp = i*i+j*j;
      if(tmp<c)
      {
        i++;
      }
      
      if(tmp>c)
      {
        j--;
      }
      
      if(tmp==c){
        return true;
      }
    }
    return false;

  }
  
};
