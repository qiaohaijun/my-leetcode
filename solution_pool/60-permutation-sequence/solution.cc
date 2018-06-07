class Solution {
public:
    string getPermutation(int n, int k) {

      std::string str_n{};
      for(int i=1;i<=n;++i){
        str_n.push_back(i+'0');
      }
      
      std::sort(str_n.begin(),str_n.end());
      
      while(k>1){
        std::next_permutation(str_n.begin(),str_n.end());
        --k;
      }
      return str_n;
    }
};
