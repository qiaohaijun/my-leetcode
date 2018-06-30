class Solution {
public:
    int count=0;



    int countSubstrings(string s) {

      for(int i=0; i<s.size();++i) {
        helper(s,i,i);
        helper(s,i,i+1);
      }
      
      return count;

    }
  
  private:
      void helper(string s, int left, int right) {
      while(left>=0 && right <s.size() && s[left] == s[right]) {
        count++;
        left--;
        right++;
      }
    }
};
