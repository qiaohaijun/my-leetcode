class Solution {
public:
    int strStr(string haystack, string needle) {
      int nLen = needle.size();
      int xLen = haystack.size();
      
      if(nLen== 0) {
        return 0;
      }
      if(xLen < nLen){
        return -1;
      }
      
      int i=0;
      while(i<=xLen-nLen) {
        int k=0;
        for(; k<nLen; ++k){
          if(needle[k]!=haystack[i+k]){
            break;
          }
        }
        if(k==needle.size()){
          return i;
        }
        i++;
        
      }
      return -1;
      
    }
};
