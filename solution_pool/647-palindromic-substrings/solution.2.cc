 class Solution {
public:
    
    int countSubstrings(string s) {
      int count=0;
      for(int i=0; i<s.size();++i) {
        count +=helper(s,i,i);
        count +=helper(s,i,i+1);
      }
      
      return count;

    }
  
  private:
      int  helper(string s, int left, int right) {
        int count = 0;
        while(left>=0 && right <s.size() && s[left] == s[right]) {
          count++;
          left--;
          right++;
        }
        return count;
        
    }
};
