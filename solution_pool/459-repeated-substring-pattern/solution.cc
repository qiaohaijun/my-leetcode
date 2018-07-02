class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      int n = s.size();
      int i=1;
      int flag = false;
      while(i<=n/2) {
        if(n%i!=0) {
          ++i;
          continue;
          
        }
        flag = check(s, i);
        if(flag==true) {
          break;
        }
        ++i;
      }
    return flag;

    }
private:
  bool check(string s, int distance){
    for(int i=0; i<s.size(); ++i) {
      if(s[i]!=s[i%distance]) {
        return false;
      }
    }
    return true;
  }
};
