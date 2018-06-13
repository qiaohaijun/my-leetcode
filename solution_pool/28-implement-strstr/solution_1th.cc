class Solution {
public:
    int strStr(string haystack, string needle) {
      if(needle.size() == 0) {
        return 0;
      }
      int i=0;
      while(i<haystack.size()) {
        int k=0;
        for(; k<needle.size(); ++k){
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
