class Solution {
public:
    bool isPalindrome(string s) {
      
      // guard
      if(s.size()<=1){
        return true;
      }
      transform(s.begin(), s.end(), s.begin(), ::toupper); 
      

      int i = 0;
      int j = s.size();
      
      while(i<j){
        while(!std::isalnum(s[i]) ) {
          i++;
          
        }
        while(!std::isalnum(s[j])) {
          j--;
        }
        if(i>=j){
          break;
        }
        if(s[i]==s[j]){
          i++;
          j--;
        } else{
          return false;
        }
      }
      return true;

    }
};
