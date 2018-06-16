class Solution {
public:
    bool rotateString(string A, string B) {
      
      // guard // A='' B=''
      if(A.size()==0&& B.size() ==0) {
        return true;
      }
      
      //guard // A='a' B='aa'
      if(A.size()!=B.size()) {
        return false;
      }
      return (A+A).find(B)<A.size();
    }
};
