class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ret;
      if(strs.size()==0) {
        return ret;
      }
      if(strs.size()==1){
        return strs[0];
      }
      
      string base = strs[0];
      bool stop_flag = false;
      int k = -1;
      
      for(k=0; k<INT_MAX;++k) {
        for(int i=1; i< strs.size();++i) {  
          
          if(strs[i].size()<k) {
            return base.substr(0,k);
          }
          
          if(base[k] != strs[i][k]) {
            return base.substr(0,k);
      
          }
        }
      }
      
      
      
      
    }
};
