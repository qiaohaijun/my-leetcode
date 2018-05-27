class Solution {
public:
    bool isVowel(char s){
      if(s=='a'|| s=='o'|| s=='e'|| s=='i'|| s=='u'){
        return true;
      }
      if(s=='A'|| s=='O'|| s=='E'|| s=='I'|| s=='U'){
        return true;
      }
      return false;
    }
    string reverseVowels(string s) {
      if(s.size()<=1){
          return s;
      }
      
      int i = 0;
      int j = s.size()-1;
      
      while(i<j){
        while(!isVowel(s[i]) ){
          ++i;
        }
        while(!isVowel(s[j]) ){
          --j;
        }
        
        if(i<j){
          char tmp = s[i];
          s[i] = s[j];
          s[j] = tmp;
          ++i;
          --j;
        }
        

      }
      return s;
    }
};
