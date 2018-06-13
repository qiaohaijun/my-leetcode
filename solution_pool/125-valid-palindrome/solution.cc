class Solution {
public:
    bool isPalindrome(string s) {
      
      // guard
      if(s.size()<=1){
        return true;
      }
      string tmp{};
      transform(s.begin(), s.end(), s.begin(), ::toupper); 
      
      for(int k = 0; k<s.size();++k){
        if(std::isalnum(s[k])){
          tmp.push_back(s[k]);
        }
      }
      if(tmp.size()<=1){
        return true;
      }
      int i = 0;
      int j = tmp.size();
      
      while(i<j){
        while(!std::isalnum(tmp[i]) ) {
          i++;
          
        }
        while(!std::isalnum(tmp[j])) {
          j--;
        }
        
        if(tmp[i]==tmp[j]){
          i++;
          j--;
        } else{
          return false;
        }
      }
      return true;

    }
};
