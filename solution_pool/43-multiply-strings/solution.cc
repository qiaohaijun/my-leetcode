class Solution {
public:
    string multiply(string num1, string num2) {
      
      string res;
      int n1 = num1.size();
      int n2 = num2.size();
      int k = n1+n2-2;
      
      
      vector<int> v(n1+n2, 0);
      
      for(auto i =0; i< n1; ++i) {
        for(auto j = 0; j< n2; ++j){
          // 高位放到高位, 和 string的表示不同.
          v[k-i-j] += (num1[i]-'0')*(num2[j]-'0');
        }
      }
      
      int carry = 0;

      for(auto i=0; i<n1+n2;++i){
        v[i]+=carry;
        carry=v[i]/10;
        v[i]=v[i]%10;
      }
      // vec size
      // 从高位遍历
      int i = v.size()-1;
      while (v[i] == 0){ 
        --i;
      }
      
      if (i < 0) return "0";
      while (i >= 0) {
        res.push_back(v[i--] + '0');
      }
      
      return res;
    }
};
