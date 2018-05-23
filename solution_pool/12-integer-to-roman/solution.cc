class Solution {
public:
    string intToRoman(int num) {
      char* digits[10]   = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
      char* tens[10]     = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
      char* hundreds[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
      char* thousands[4] = {"","M","MM","MMM"};
      string res;
      stringstream ss;
      if(thousands[num/1000]!=""){
        ss << thousands[num/1000];
      }
      if(hundreds[num%1000/100]!=""){
        ss<<hundreds[num%1000/100];
      }
      if(tens[num%100/10]!=""){
        ss <<tens[num%100/10];
      }
      if(digits[num%10]!=""){
        ss << digits[num%10];
      }
      res = ss.str();
      return res;
    }
};
