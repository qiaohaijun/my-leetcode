class Solution {
public:
    bool isPalindrome(int x) {

      
      // guard
      if(x<0){
        return false;
      }
      string x_str = std::to_string(x);
      int i = 0;
      int j = x_str.size()-1;
      while(i<j){
        if(x_str[i]!=x_str[j]){
          return false;
        }
        i++;
        j--;
      }
      return true;
    }
};
