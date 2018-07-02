class Solution {
public:
    int repeatedStringMatch(string A, string B) {
      int nA = A.size();
      int nB = B.size();
      int cnt = 1;
      string t = A;
      for(int i=0; i<= nB/nA+2;++i ){
        if(t.find(B)!=string::npos) return cnt;
        t+=A;
        cnt++;
      }
      return -1;
    }
};
