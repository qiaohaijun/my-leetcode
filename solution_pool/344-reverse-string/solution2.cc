class Solution {
public:
    string reverseString(string s) {
      // guard
      if(s.size() <= 1){
        return s;
      }
      
      std::reverse(s.begin(), s.end());
      return s;
    }
};
